#ifndef MM_WIDGET_HPP
#define MM_WIDGET_HPP
#include <QtGui>
#include <vector>
// #include "sqlitewrapper.hpp"
#include "tableview.hpp"
namespace mm
{
	class Database;
	class Widget :public QWidget
	{
		Q_OBJECT
	public:
		Widget(QWidget* parent = 0, Qt::WindowFlags f = 0){};
		Widget(QString name);
	public slots:
		
	private:
		QVBoxLayout* vbl;
		std::vector<TableView*> views;
		Database* db ;
	};
}

#endif