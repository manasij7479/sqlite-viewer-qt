// #ifndef MM_CONSOLE_SHELL
// #define MM_CONSOLE_SHELL
// #include "shell.hpp"
// #include <iostream>
// #include <string>
// namespace mm
// {
// 	static int callback(void *NotUsed, int argc, char **argv, char **col)
// 	{
// 		for(int i=0; i<argc; ++i)
// 			std::cout<<col[i]<<"="<<(argv[i] ? argv[i] : "NULL")<<"\t";
// 		std::cout<<std::endl;
// 		return 0;
// 	}
// 	class ConsoleShell :public Shell
// 	{
// 	public:
// 		ConsoleShell(Database& db_):Shell(db_){};
// 		virtual int operator()()
// 		{
// 			while(true)
// 			{
// 				std::string command;
// 				std::cout<<"$ ";
// 				std::getline(std::cin,command,';');
// 				getDb()(command,callback);
// 			}
// 		}
// 		~ConsoleShell(){};
// 	private:
// 		
// 	};
// }
// 
// #endif