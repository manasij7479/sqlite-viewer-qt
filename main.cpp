#include <QtGui>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QLabel foo("Hello, sqlite.");
    foo.show();
    return app.exec();
}
