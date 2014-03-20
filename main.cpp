// #include <QtGui>
// #include<iostream>
// 
// 
// 
// int main(int argc, char** argv)
// {
// //    QApplication app(argc, argv);
// //     QLabel foo("Hello, sqlite.");
// //     foo.show();
// //     return app.exec();
// 	
// 	
// }


#include<iostream>
#include "sqlitewrapper.hpp"
#include "dbutils.hpp"
static int callback(void *NotUsed, int argc, char **argv, char **col)
{
    for(int i=0; i<argc; ++i)
		std::cout<<col[i]<<"="<<(argv[i] ? argv[i] : "NULL")<<"\t";
    printf("\n");
    return 0;
}

int main()
{
	std::string filename="foo.db";
	std::string command;
	
	mm::Database db(filename);
	
	for(auto s:mm::getTableNames(db))
		std::cout<<s<<' ';
	std::cout<<std::endl;
	
	while(true)
	{
		std::cout<<"$ ";
		std::getline(std::cin,command,';');
		db(command,callback);
	}
	return 0;
}
