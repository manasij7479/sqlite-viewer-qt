#ifndef MM_SHELL_HPP
#define MM_SHELL_HPP
#include "sqlitewrapper.hpp"
namespace mm
{
	
	class Shell
	{
	public:
		Shell(Database& db_):db(db_){};
		Database& getDb(){return db;}
		virtual void operator()()=0;
		virtual ~Shell(){};
	private:
		Database& db;
	};
	
}
#endif
