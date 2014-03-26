#include "widget.hpp"

namespace mm
{
	Widget::Widget()
	{
		vl=new QVBoxLayout(this);
		l=new QLabel("Hello");
		p=new QPushButton("Quit");
		vl->addWidget(l);
		vl->addWidget(p);
		setLayout(vl);
		connect(p,SIGNAL(pressed()),qApp,SLOT(quit()));
	}
}