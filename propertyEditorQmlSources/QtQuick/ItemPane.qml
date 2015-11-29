/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd.
** Contact: http://www.qt.io/licensing
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company.  For licensing terms and
** conditions see http://www.qt.io/terms-conditions.  For further information
** use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 or version 3 as published by the Free
** Software Foundation and appearing in the file LICENSE.LGPLv21 and
** LICENSE.LGPLv3 included in the packaging of this file.  Please review the
** following information to ensure the GNU Lesser General Public License
** requirements will be met: https://www.gnu.org/licenses/lgpl.html and
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, The Qt Company gives you certain additional
** rights.  These rights are described in The Qt Company LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
****************************************************************************/

import QtQuick 2.0
import HelperWidgets 2.0
import QtQuick.Layouts 1.0

Rectangle {
    id: itemPane
    width: 320
    height: 400
    color: "#4f4f4f"

    ScrollView {
        anchors.fill: parent

        Column {
            y: -1
            width: itemPane.width
            Section {
                caption: "基础"

                anchors.left: parent.left
                anchors.right: parent.right

                SectionLayout {
                    Label {
                        text: "类型"

                    }

                    SecondColumnLayout {

                        Label {
                            text: backendValues.className.value
                            width: lineEdit.width
                        }
                    }

                    Label {
                        text: "id"
                    }

                    SecondColumnLayout {
                        LineEdit {
                            id: lineEdit

                            backendValue: backendValues.id
                            placeholderText: qsTr("id")
                            text: backendValues.id.value
                            Layout.fillWidth: true
                            showTranslateCheckBox: false
                            showExtendedFunctionButton: false
                        }
                        // workaround: without this item the lineedit does not shrink to the
                        // right size after resizing to a wider width
                        Item {
                            width: 0
                            height: 1
                        }
                    }
                }
            }

            GeometrySection {
            }

            Section {
                anchors.left: parent.left
                anchors.right: parent.right

                caption: "能见度"

                SectionLayout {
                    rows: 2
                    Label {
                        text: "可见的"
                    }

                    SecondColumnLayout {

                        CheckBox {
                            text: "是否隐藏"
                            backendValue: backendValues.visible
                        }

                        Item {
                            width: 10
                            height: 10

                        }

                        CheckBox {
                            text: "裁减子对象"
                            backendValue: backendValues.clip
                        }
                        Item {
                            Layout.fillWidth: true
                        }
                    }

                    Label {
                        text: "透明度"
                    }

                    SecondColumnLayout {
                        SpinBox {
                            backendValue: backendValues.opacity
                            decimals: 2

                            minimumValue: 0
                            maximumValue: 1
                            hasSlider: true
                            stepSize: 0.1
                        }
                        Item {
                            Layout.fillWidth: true
                        }
                    }
                }
            }

            Item {
                height: 4
                width: 4
            }

            TabView {
                anchors.left: parent.left
                anchors.right: parent.right
                frameVisible: false

                id: tabView
                height: Math.max(layoutSectionHeight, specficsHeight)

                property int layoutSectionHeight: 400
                property int specficsOneHeight: 0
                property int specficsTwoHeight: 0

                property int specficsHeight: Math.max(specficsOneHeight, specficsTwoHeight)

                property int extraHeight: 40

                Tab {
                    title: backendValues.className.value

                    component: Column {
                        anchors.left: parent.left
                        anchors.right: parent.right
                        Loader {
                            anchors.left: parent.left
                            anchors.right: parent.right
                            visible: theSource !== ""

                            id: specificsTwo;
                            sourceComponent: specificQmlComponent

                            property string theSource: specificQmlData

                            onTheSourceChanged: {
                                active = false
                                active = true
                            }

                            onLoaded: {
                                tabView.specficsTwoHeight = specificsTwo.item.height + tabView.extraHeight
                            }
                        }

                        Loader {
                            anchors.left: parent.left
                            anchors.right: parent.right

                            id: specificsOne;
                            source: specificsUrl;

                            onLoaded: {
                                tabView.specficsOneHeight = specificsOne.item.height + tabView.extraHeight
                            }
                        }
                    }
                }

                Tab {
                    title: "布局"
                    component: Column {
                        anchors.left: parent.left
                        anchors.right: parent.right

                        LayoutSection {
                            property int childRectHeight: childrenRect.height
                            onChildRectHeightChanged: {
                                tabView.layoutSectionHeight = childRectHeight + tabView.extraHeight
                            }
                        }
                    }
                }

                Tab {
                    anchors.fill: parent
                    title: "高级"
                    component: Column {
                        anchors.left: parent.left
                        anchors.right: parent.right
                        AdvancedSection {
                        }
                    }
                }
            }
        }
    }
}
