#include "widget.hpp"
#include <vector>
#include "dbutils.hpp"
#include <iostream>
namespace mm
{
	Widget::Widget(QString name)
	{
		db=new mm::Database(name.toStdString());
		auto v=getTableNames(*db);
		
		QVBoxLayout* vbl=new QVBoxLayout(this);
		
		for(auto name:v)
		{
			QLabel* l=new QLabel(QString(name.c_str()));
			vbl->addWidget(l);
			std::cout<<name<<std::endl;
		}
		
		this->setLayout(vbl);
		
		
	}
	
}