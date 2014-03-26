#include "guishell.hpp"

namespace mm
{
		GuiShell::GuiShell()
		{
			wid=new Widget();
			setCentralWidget(wid);
			
			QAction* quitaction=new QAction("Quit",this);
			connect(quitaction,SIGNAL(triggered()),qApp,SLOT(quit()));
			
			QAction* openaction=new QAction("Open",this);
			connect(openaction,SIGNAL(triggered()),this,SLOT(open()));
			connect(this,SIGNAL(fileOpened(QString)),wid,SLOT(newFile(QString)));
			
			QMenu* filemenu=menuBar()->addMenu("File");
			filemenu->addAction(openaction);
			filemenu->addAction(quitaction);
			

		}
		GuiShell::~GuiShell()
		{
			
		}
//#include "guishell.moc"
}