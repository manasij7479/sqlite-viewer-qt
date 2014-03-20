#include "dbutils.hpp"

namespace mm
{

	
	static int get_table_names_cb(void *vec, int argc, char **argv, char **col)
	{
		auto result =static_cast<std::vector<std::string>*>(vec);
		for(int i=0; i<argc; ++i)
			result->push_back((argv[i] ? argv[i] : "NULL"));
		return 0;
	}
	
	std::vector<std::string> getTableNames(Database& db)
	{
		std::string command="select name from sqlite_master where type = \"table\";";
		std::vector<std::string> ret;
		db(command,get_table_names_cb,&ret);
		return ret;
	}

}