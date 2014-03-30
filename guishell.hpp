#ifndef MM_GUISHELL_HPP
#define MM_GUISHELL_HPP
#include <QtGui>
#include "widget.hpp"
namespace mm
{
	class GuiShell : public QMainWindow
	{
		Q_OBJECT
	public:
		GuiShell();
		virtual ~GuiShell();
	private slots:
		void open()
		{
			QString filename =
			QFileDialog::getOpenFileName(this,"Open File", "","Files (*.*)");
			//emit fileOpened(fileName);
			Widget* next=new Widget(filename);
			wid->deleteLater();
			this->setCentralWidget(next);
			wid=next;
		}
		
	signals:
		//void fileOpened(QString value);
	private:
		Widget* wid;
		
	};
}
#endif