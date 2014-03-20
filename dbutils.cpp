#include "dbutils.hpp"

namespace mm
{

	static std::vector<std::string> result;
	
	static int get_table_names_cb(void *NotUsed, int argc, char **argv, char **col)
	{
		for(int i=0; i<argc; ++i)
			result.push_back((argv[i] ? argv[i] : "NULL"));
		return 0;
	}
	
	std::vector<std::string> getTableNames(Database& db)
	{
		std::string command="select name from sqlite_master where type = \"table\";";
		db(command,get_table_names_cb);
		std::vector<std::string> ret;
		std::swap(ret,result);
		return ret;
	}

}