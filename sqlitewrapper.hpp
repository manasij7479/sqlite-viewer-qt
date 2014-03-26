#ifndef MM_SQLITE_WRAPPER_HPP
#define MM_SQLITE_WRAPPER_HPP

#include <sqlite3.h>
#include <stdexcept>
#include <string>

namespace mm
{
	typedef int (*Callback)(void*, int, char**, char**);
	class Database
	{
	public:
		Database(std::string filename_):filename(filename_)
		{
			auto err=sqlite3_open(filename.c_str(),&db);
			if(err)
			{
				throw std::runtime_error("Can't open database: "+std::string(sqlite3_errmsg(db)));
			}
		}
		
		void operator()(std::string command,Callback function,void* arg=0)
		{
			auto err=sqlite3_exec(db,command.c_str(),function,arg,&errormsg);
			if(err!=SQLITE_OK)
				throw std::runtime_error("SQL Error: "+std::string(errormsg));
		}
		
		~Database()
		{
			sqlite3_free(errormsg);
			sqlite3_close(db);
		}
		
	private:
		std::string filename;
		sqlite3* db;
		char* errormsg;
	};

}
#endif