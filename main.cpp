#include "MainWindow.hpp"
#include <QApplication>

#include "ListViewTest.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ListViewTest test;
    test.show();

    return app.exec();
}
