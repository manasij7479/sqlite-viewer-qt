// #ifndef MM_SHELL_FACTORY
// #define MM_SHELL_FACTORY
// 
// #include "shell.hpp"
// #include "consoleshell.hpp"
// #include "guishell.hpp"
// namespace mm
// {
// 	Shell& ShellFactory(Database& db,int argc,char** argv)
// 	{
// 		Shell* shell;
// 		
// 		if(argc==1)
// 			shell=new ConsoleShell(db);
// 		else shell =new GuiShell(db,argc,argv);
// 		
// 		
// 		return *shell;
// 	}
// }
// 
// #endif