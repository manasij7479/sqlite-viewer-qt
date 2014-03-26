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
			QString fileName =
			QFileDialog::getOpenFileName(this,"Open File", "","Files (*.*)");
			emit fileOpened(fileName);
		}
	signals:
		void fileOpened(QString value);
	private:
		Widget* wid;
		
	};
}
#endif