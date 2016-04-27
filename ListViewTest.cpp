#include "ListViewTest.hpp"

ListViewTest::~ListViewTest(){

}

ListViewTest::ListViewTest(QWindow *parent)
    :P(parent){
    this->setSource(QUrl("qrc:/MainWindow.qml"));
    this->setResizeMode(P::SizeRootObjectToView);
    this->resize(300,800);
}

















