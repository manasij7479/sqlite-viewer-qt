#include <QtGui>
#include "guishell.hpp"
int main(int argc, char** argv)
{
	QApplication app(argc, argv);
	mm::GuiShell gui;
	gui.show();
	return app.exec();
}
