import QtQuick 2.1

Label {
    property variant backendValue

    onBackendValueChanged: {
        var buf = JSON.parse(backendValue.value);

        if(("lineEditExMode" in buf) && ("labelText" in buf))
        {
            text = buf["labelText"];
            tooltip = buf["labelText"];
        }
    }

    Timer {
        interval: 1000
        running: true
        repeat: false

        onTriggered: {
            backendValue = null;
        }
    }
}
