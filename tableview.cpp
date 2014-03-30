#include "tableview.hpp"
namespace mm 
{
	TableView::TableView(QString tablename)
	{
		QHBoxLayout* hbl=new QHBoxLayout(this);
		name=new QLabel(tablename);
		hbl->addWidget(name);
		this->setLayout(hbl);
		
	}

}