#ifndef MM_WIDGET_HPP
#define MM_WIDGET_HPP
#include <QtGui>
namespace mm
{
	class Widget :public QWidget
	{
	public:
		Widget()
		{
			vl=new QVBoxLayout(this);
			l=new QLabel("Hello");
			p=new QPushButton("Quit");
			vl->addWidget(l);
			vl->addWidget(p);
			setLayout(vl);
			connect(p,SIGNAL(pressed()),qApp,SLOT(quit()));
		}
	private:
		QVBoxLayout* vl;
		QLabel* l;
		QPushButton* p;
	};
}

#endif