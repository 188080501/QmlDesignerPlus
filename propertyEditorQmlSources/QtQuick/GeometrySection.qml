/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing
**
** This file is part of the Qt Quick Controls module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd and its Subsidiary(-ies) nor the names
**     of its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

import QtQuick 2.5
import HelperWidgets 2.0
import QtQuick.Layouts 1.1
import "../Dialogs"

Section {
    caption: "位置与大小"

    anchors.left: parent.left
    anchors.right: parent.right

    SectionLayout {
        rowSpacing: 4
        rows: 2

        Label {
            text: "位置"
        }

        SecondColumnLayout {

            Label {
                text: "X"
                width: 12
            }

            SpinBox {
                backendValue: backendValues.x
                maximumValue: 0xffff
                minimumValue: -0xffff
                decimals: 0
            }

            Item {
                width: 4
                height: 4
            }

            Label {
                text: "Y"
                width: 12
            }

            SpinBox {
                backendValue: backendValues.y
                maximumValue: 0xffff
                minimumValue: -0xffff
                decimals: 0
            }

            Button {
                Layout.minimumWidth: 40
                Layout.maximumWidth: 40
                Layout.minimumHeight: 24
                Layout.maximumHeight: 24
                text: "中心"

                onClicked: {
                    advancedGeomtryEditor.open(backendValues.x.value, backendValues.y.value,
                                               backendValues.width.value, backendValues.height.value);
                }

                AdvancedGeomtryEditor {
                    id: advancedGeomtryEditor

                    onAccepted: {
                        backendValues.x.value = advancedGeomtryEditor.currentX;
                        backendValues.y.value = advancedGeomtryEditor.currentY;
                        backendValues.width.value = advancedGeomtryEditor.currentWidth;
                        backendValues.height.value = advancedGeomtryEditor.currentHeight;
                    }
                }
            }

            ExpandingSpacer {

            }
        }
        Label {
            text: "大小"
        }

        SecondColumnLayout {
            Layout.fillWidth: true

            Label {
                text: "宽"
                width: 12
            }

            SpinBox {
                backendValue: backendValues.width
                maximumValue: 0xffff
                minimumValue: 0
                decimals: 0
            }

            Item {
                width: 4
                height: 4
            }

            Label {
                text: "高"
                width: 12
            }

            SpinBox {
                backendValue: backendValues.height
                maximumValue: 0xffff
                minimumValue: 0
                decimals: 0
            }
            ExpandingSpacer {

            }
        }
    }
}
