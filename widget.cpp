#include "widget.hpp"
#include <vector>
#include "sqlitewrapper.hpp"
#include "dbutils.hpp"
#include <iostream>
namespace mm
{
	Widget::Widget(QString name)
	{
		db=new mm::Database(name.toStdString());
		auto v=getTableNames(*db);
		
		vbl=new QVBoxLayout(this);
		
		for(auto name:v)
		{
			auto t=new TableView(name.c_str());
			vbl->addWidget(t);
			views.push_back(t);
// 			std::cout<<name<<std::endl;
		}
		
		this->setLayout(vbl);
		
	}
	
}