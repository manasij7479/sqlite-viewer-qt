#ifndef MM_TABLE_VIEW_HPP
#define MM_TABLE_VIEW_HPP
#include <QtGui>
namespace mm
{

class Database;
	class TableView:public QWidget
	{
		Q_OBJECT
	public:
		explicit TableView(QWidget* parent = 0, Qt::WindowFlags f = 0){};
		TableView(Database* db_,QString tablename);
	private slots:
		void view();
	private:
		QString name;
		QLabel* l;
		QPushButton* p;
		Database* db;
	};
}
#endif