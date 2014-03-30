#include "tableview.hpp"
#include "dbutils.hpp"
namespace mm 
{
	TableView::TableView(Database* db_,QString tablename)
	{
		db=db_;
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
		
		QTextEdit* pte=new QTextEdit();
		
		pte->setReadOnly(true);
		pte->setText(getAllData(*db,name.toStdString()).c_str());
// 		l->setGeometry(100,100,400,400);
		pte->show();
	}

}