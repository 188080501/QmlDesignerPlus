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

import QtQuick 2.5
import HelperWidgets 2.0
import QtQuick.Layouts 1.1

Column {
    anchors.left: parent.left
    anchors.right: parent.right

    Section {
        anchors.left: parent.left
        anchors.right: parent.right
        caption: qsTr("Window")

        SectionLayout {
            Label {
                text: "标题"
            }

            SecondColumnLayout {
                LineEdit {
                    backendValue: backendValues.title
                    Layout.fillWidth: true
                }

                ExpandingSpacer {

                }
            }

            Label {
                text: "大小"
            }

            SecondColumnLayout {
                Label {
                    text: "宽"
                    width: 12
                }

                SpinBox {
                    backendValue: backendValues.width
                    minimumValue: 0
                    maximumValue: 10000
                    decimals: 0
                }

                Label {
                    text: "高"
                    width: 12
                }

                SpinBox {
                    backendValue: backendValues.height
                    minimumValue: 0
                    maximumValue: 10000
                    decimals: 0
                }

                ExpandingSpacer {

                }
            }

        }
    }

    Section {
        anchors.left: parent.left
        anchors.right: parent.right
        caption: "背景色"

        ColorEditor {
            caption: "背景色"
            backendValue: backendValues.color
            supportGradient: true
        }

    }

    Section {
        anchors.left: parent.left
        anchors.right: parent.right
        caption: "Rectangle"

        SectionLayout {
            rows: 2
            Label {
                text: "是否隐藏"
            }
            SecondColumnLayout {
                CheckBox {
                    backendValue: backendValues.visible
                    Layout.preferredWidth: 80
                }
                ExpandingSpacer {

                }
            }
            Label {
                text: "透明度"
            }
            SecondColumnLayout {
                SpinBox {
                    backendValue: backendValues.opacity
                    hasSlider: true
                    Layout.preferredWidth: 80
                    minimumValue: 0
                    maximumValue: 1
                    stepSize: 0.1
                    decimals: 2
                }
                ExpandingSpacer {

                }
            }
        }
    }
}
