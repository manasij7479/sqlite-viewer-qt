#ifndef MM_WIDGET_HPP
#define MM_WIDGET_HPP
#include <QtGui>
#include <vector>
#include "sqlitewrapper.hpp"
namespace mm
{
	class Widget :public QWidget
	{
		Q_OBJECT
	public:
		Widget(QWidget* parent = 0, Qt::WindowFlags f = 0){};
		Widget(QString name);
	public slots:
		
	private:
		QVBoxLayout* vl;
		QLabel* l;
		std::vector<QLabel*> labels;
		QPushButton* p;
		Database* db ;
	};
}

#endif