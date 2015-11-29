import QtQuick 2.1
import "../../../QmlDesignerPlusForHwaCreate/customComponents/PropertyTemplatesPaths.js" as Paths

Rectangle {
    id: hwaCreateDashboardEdit
    z: ((loader.height !== 0) && (componentHeight !== 0)) ? (1) : (0)
    height: 25
    color: "#00000000"

    property variant backendValue
    property var sourceData

    property bool firstRefresh: true
    property bool needBeginData: true
    property int componentHeight: 0

    function showExpand() {
        if(mouseAreaExpand.width === 0)
        {
            mouseAreaExpand.x = -50;
            mouseAreaExpand.y = -500;
            mouseAreaExpand.width = parent.width + 100;
            mouseAreaExpand.height = 1000;
        }

        loader.height = componentHeight;
    }

    function hideExpand() {
        loader.height = 0;
    }

    function expandIsShow() {
        return loader.height !== 0
    }

    function dataChanged(data) {
        sourceData["data"] = data;
        needBeginData = false;
        lineEdit.text = JSON.stringify(sourceData);
        needBeginData = true;
    }

    MouseArea {
        id: mouseAreaExpand
        width: 0
        height: 0
        visible: ((loader.height === componentHeight) && (componentHeight !== 0)) ? (1) : (0)

        onClicked: {
            hideExpand();
        }
    }

    LineEdit {
        id: lineEdit
        width: parent.width
        anchors.centerIn: parent
        backendValue: hwaCreateDashboardEdit.backendValue

        onTextChanged: {
            if(firstRefresh)
            {
                sourceData = JSON.parse(text);

                if(("lineEditExMode" in sourceData) && ("source" in sourceData))
                {
                    lineEdit.visible = false;
                    loader.visible = true;

                    // Source manage
                    loader.source = Paths.filter(sourceData["source"]);

                    // Mode manage
                    switch(sourceData["lineEditExMode"])
                    {
                        case "expandMode":
                            buttonExpand.visible = true;

                            if("expandButtonText" in sourceData)
                            {
                                buttonExpand.text = sourceData["expandButtonText"];
                            }
                            else
                            {
                                buttonExpand.text = "Expand";
                            }

                            if("componentHeight" in sourceData)
                            {
                                componentHeight = sourceData["componentHeight"];
                            }
                            break;

                        case "generalMode":
                            if("componentHeight" in sourceData)
                            {
                                hwaCreateDashboardEdit.height = sourceData["componentHeight"];
                                loader.height = sourceData["componentHeight"];
                            }
                            break;
                    }
                }
            }

            if(needBeginData)
            {
                sourceData = JSON.parse(text);
                loader.beginData();
            }

            if(firstRefresh)
            {
                needBeginData = true;
                firstRefresh = false;
            }
        }
    }

    Button {
        id: buttonExpand
        width: lineEdit.width
        height: lineEdit.height
        anchors.centerIn: parent
        visible: false

        onClicked: {
            if(expandIsShow())
            {
                hideExpand();
            }
            else
            {
                showExpand();
            }
        }
    }

    Loader {
        id: loader
        x: -1 * (parent.parent.width - parent.width)
        y: lineEdit.height + 5
        width: parent.parent.width
        height: 0
        visible: false
        clip: true

        function beginData() {
            if("__data__" in item)
            {
                if("data" in sourceData)
                {
                    item.beginData(sourceData["data"]);
                }
                else
                {
                    item.beginData(JSON.parse("{}"));
                }
            }
        }

        onLoaded: {
            beginData();

            if("__dataChanged__" in item)
            {
                item.__dataChanged__ = hwaCreateDashboardEdit.dataChanged;
            }

            if(sourceData["lineEditExMode"] === "generalMode")
            {
                y = 5;
            }
        }

        Behavior on height {
            NumberAnimation { duration: componentHeight * 2; easing.type: Easing.OutQuad }
        }

        MouseArea {
            anchors.fill: parent
        }
    }
}
