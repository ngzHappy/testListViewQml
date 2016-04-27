import QtQuick 2.5
import QtQuick.Controls 1.4

ScrollView {

    width: 800;
    height: 800;

    ListView{

        id:listViewID;
        anchors.fill: parent
        model: 100;
        delegate: Rectangle{
            height: 36;
            width:parent.width;
            color: Qt.rgba(Math.random(),Math.random(),Math.random(),1)
            Text{
                anchors.fill: parent;
                text: index;
            }
        }

    }

}
