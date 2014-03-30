#ifndef MM_DB_UTILS_HPP
#define MM_DB_UTILS_HPP
#include "sqlitewrapper.hpp"
#include <vector>
namespace mm
{
	std::vector<std::string> getTableNames(Database& db);
	std::string getAllData(Database& db,std::string table);
}

#endif
