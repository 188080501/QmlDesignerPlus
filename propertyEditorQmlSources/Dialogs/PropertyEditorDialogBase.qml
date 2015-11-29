import QtQuick 2.4
import QtQuick.Window 2.0
import HelperWidgets 2.0

DialogBase {
    id: propertyEditorDialogBase
    title: "Editor"

    property bool backendValueNeedRefresh: true

    property variant backendValue: null

    property var backendValueWatcher: backendValue.value
    property var backendValueWatcherHelper

    property var backenValuedOnOpen

    signal begining

    function open() {
        if(backendValue !== null)
        {
            backenValuedOnOpen = backendValue.value;
        }

        begining();

        x = (Screen.desktopAvailableWidth - width) / 2;
        y = (Screen.desktopAvailableHeight - height) / 2;
        show();
        focus = true;
    }

    function readFromBackendValue() {
        return backendValue.value;
    }

    function saveToBackendValue(value) {
        backendValueNeedRefresh = false;
        backendValue.value = value;
        backendValueNeedRefresh = true;
    }

    Keys.onEnterPressed: {
        hide();
    }

    Keys.onReturnPressed: {
        hide();
    }

    Keys.onEscapePressed: {
        hide();
    }

    onBackendValueWatcherChanged: {
        if(!backendValueNeedRefresh) { return; }

        if(visible && (backendValueWatcherHelper !== backendValueWatcher.value)){
            backendValueWatcherHelper = backendValueWatcher.value;
            begining();
        }
    }

    Button {
        id: buttonConfirm
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10
        anchors.right: parent.right
        anchors.rightMargin: 10
        width: 80
        height: 24
        text: "确定"
        tooltip: "确认修改"
        visible: backendValue !== null

        onClicked: {
            hide();
        }
    }

    Button {
        id: buttonRestore
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10
        anchors.right: buttonConfirm.left
        anchors.rightMargin: 10
        width: 80
        height: 24
        text: "撤销"
        tooltip: "还原至编辑器被打开时的状态"
        visible: backendValue !== null

        onClicked: {
            backendValueNeedRefresh = false;
            saveToBackendValue(backenValuedOnOpen)
            backendValueNeedRefresh = true;
            begining();
        }
    }

    Button {
        id: buttonReset
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 10
        anchors.right: buttonRestore.left
        anchors.rightMargin: 10
        width: 80
        height: 24
        text: "缺省值"
        tooltip: "还原至缺省值"
        visible: backendValue !== null

        onClicked: {
            backendValueNeedRefresh = false;
            transaction.start();
            backendValue.resetValue();
            transaction.end();
            backendValueNeedRefresh = true;
            hide();
        }
    }
}
