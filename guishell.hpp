#ifndef MM_GUISHELL_HPP
#define MM_GUISHELL_HPP
#include <QtGui>
#include <unordered_map>
#include "widget.hpp"

namespace mm
{
	class GuiShell : public QMainWindow
	{
		
	public:
		GuiShell()
		{
			l=new Widget();
			setCentralWidget(l);
			
			
			
		}
		
		virtual ~GuiShell()
		{
			
		};
	private:
		Widget* l;
		QAction* fileopen;
		
	};
}

#endif