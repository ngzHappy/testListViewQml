#ifndef LISTVIEWTEST_HPP
#define LISTVIEWTEST_HPP

#include <QtQuick/QtQuick>

class ListViewTest:public QQuickView
{
    Q_OBJECT

private:
    typedef QQuickView P;
public:
    ListViewTest(QWindow *parent = nullptr);
    ~ListViewTest();
};

#endif // LISTVIEWTEST_HPP
