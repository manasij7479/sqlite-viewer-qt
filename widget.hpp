#ifndef MM_WIDGET_HPP
#define MM_WIDGET_HPP
#include <QtGui>
namespace mm
{
	class Widget :public QWidget
	{
		Q_OBJECT
	public:
		Widget();
	public slots:
		void newFile(QString filename)
		{
			l->setText(filename);
		}
		
	private:
		QVBoxLayout* vl;
		QLabel* l;
		QPushButton* p;
	};
}

#endif