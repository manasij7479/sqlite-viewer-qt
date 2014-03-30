#include "tableview.hpp"
namespace mm 
{
	TableView::TableView(QString tablename)
	{
		name=tablename;
		QHBoxLayout* hbl=new QHBoxLayout(this);
		
		l=new QLabel(tablename);
		hbl->addWidget(l);
		
		p=new QPushButton("View");
		hbl->addWidget(p);
		connect(p,SIGNAL(clicked(bool)),this,SLOT(view()));
		
		this->setLayout(hbl);
	}
	void TableView::view()
	{
		qDebug()<<"TableView::view\n";
	}

}