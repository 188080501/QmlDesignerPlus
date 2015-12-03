import QtQuick 2.5
import QtQuick.Window 2.2
import HelperWidgets 2.0

DialogBase {
    id: advancedGromtryEditor
    width: 300
    height: 200

    property real currentX
    property real currentY
    property real currentWidth
    property real currentHeight

    signal accepted()

    function open(x, y, width, height) {
        spinBoxForCenterX.value = x + width / 2;
        spinBoxForCenterY.value = y + height / 2;
        spinBoxForHalfWidth.value = width / 2;
        spinBoxForHalfHeight.value = height / 2;

        currentX = x;
        currentY = y;
        currentWidth = width;
        currentHeight = height;

        advancedGromtryEditor.show();
    }

    Text {
        anchors.right: spinBoxForCenterX.left
        anchors.verticalCenter: spinBoxForCenterX.verticalCenter
        text: "中心X："
        color: "#ffffff"
    }

    SpinBox {
        id: spinBoxForCenterX
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: -48
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: -50
        minimumValue: -999999
        maximumValue: 999999

        onValueChanged: {
            currentX = value - (currentWidth / 2);
        }
    }

    Text {
        anchors.right: spinBoxForCenterY.left
        anchors.verticalCenter: spinBoxForCenterY.verticalCenter
        text: "中心Y："
        color: "#ffffff"
    }

    SpinBox {
        id: spinBoxForCenterY
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: 92
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: -50
        minimumValue: -999999
        maximumValue: 999999

        onValueChanged: {
            currentY = value - (currentHeight / 2);
        }
    }

    Text {
        anchors.right: spinBoxForHalfWidth.left
        anchors.verticalCenter: spinBoxForHalfWidth.verticalCenter
        text: "半宽："
        color: "#ffffff"
    }

    SpinBox {
        id: spinBoxForHalfWidth
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: -48
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 9
        minimumValue: -999999
        maximumValue: 999999

        onValueChanged: {
            currentWidth = value * 2;
            currentX = spinBoxForCenterX.value - (currentWidth / 2);
        }
    }

    Text {
        anchors.right: spinBoxForHalfHeight.left
        anchors.verticalCenter: spinBoxForHalfHeight.verticalCenter
        text: "半高："
        color: "#ffffff"
    }

    SpinBox {
        id: spinBoxForHalfHeight
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: 92
        anchors.verticalCenter: parent.verticalCenter
        anchors.verticalCenterOffset: 9
        minimumValue: -999999
        maximumValue: 999999

        onValueChanged: {
            currentHeight = value * 2;
            currentY = spinBoxForCenterY.value - (currentHeight / 2);
        }
    }

    Button {
        width: 80
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.horizontalCenterOffset: 0
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 26
        text: "确定"

        onClicked: {
            accepted();
            hide();
        }
    }
}
