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
#include "shellfactory.hpp"

int main(int argc,char** argv)
{
	std::string filename="foo.db";
	std::string command;
	
	mm::Database db(filename);
	
	for(auto s:mm::getTableNames(db))
		std::cout<<s<<' ';
	std::cout<<std::endl;
	
	mm::Shell& shell=mm::ShellFactory(db,argc,argv);
	
	
	return shell();
}
