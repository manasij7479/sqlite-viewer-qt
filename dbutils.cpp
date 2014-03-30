#include "dbutils.hpp"
#include <sstream>
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
	
	static int get_all_data_cb(void* str,int argc,char** argv,char** col)
	{
		auto& result=*static_cast<std::ostringstream*>(str);
		for(int i=0;i<argc;++i)
			result<<(argv[i] ? argv[i] : "NULL")<<'\t';
		result<<'\n';
		return 0;
	}
	std::string getAllData(Database& db, std::string table)
	{
		std::string command="select * from "+table;
		std::ostringstream os;
		db(command,get_all_data_cb,&os);
		return os.str();
	}


}