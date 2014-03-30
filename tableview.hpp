#ifndef MM_TABLE_VIEW_HPP
#define MM_TABLE_VIEW_HPP
#include <QtGui>
namespace mm
{
	class TableView:public QWidget
	{
		Q_OBJECT
	public:
    explicit TableView(QWidget* parent = 0, Qt::WindowFlags f = 0){};
	TableView(QString tablename);
	private:
		QLabel* name;
	};
}
#endif