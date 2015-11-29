import QtQuick 2.4
import QtQuick.Window 2.0
import HelperWidgets 2.0

DialogBase {
    id: dialogForMoveToXY
    width: 150
    height: 150

    property alias targetX: spinBoxForTargetX.value
    property alias targetY: spinBoxForTargetY.value

    signal accepted(var targetX, var taretgY)

    Text {
        anchors.right: spinBoxForTargetX.left
        anchors.verticalCenter: spinBoxForTargetX.verticalCenter
        text: "中心X："
        color: "#ffffff"
    }

    SpinBox {
        id: spinBoxForTargetX
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: 20
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: -30
        minimumValue: -999999
        maximumValue: 999999
    }

    Text {
        anchors.right: spinBoxForTargetY.left
        anchors.verticalCenter: spinBoxForTargetY.verticalCenter
        text: "中心Y："
        color: "#ffffff"
    }

    SpinBox {
        id: spinBoxForTargetY
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: 20
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 10
        minimumValue: -999999
        maximumValue: 999999
    }

    Button {
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: 5
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 5
        text: "确定"

        onClicked: {
            accepted(spinBoxForTargetX.value, spinBoxForTargetY.value);
            hide();
        }
    }
}
