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

#include "HelperWidgetPlusForItem.h"
#include "ui_HelperWidgetPlusForItem.h"
#include "contextpanewidget.h"
#include "customcolordialog.h"
#include <qmljs/qmljspropertyreader.h>
#include <qmljs/qmljsutils.h>
#include <QDebug>
#include <QTimer>

namespace QmlEditorWidgets {

HelperWidgetPlusForItem::HelperWidgetPlusForItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelperWidgetPlusForItem)
{
    ui->setupUi(this);

    connect(ui->pushButtonSyncSizeFromParent, &QPushButton::clicked, [=]()
    {
        if(ui->checkBoxUseAnchors->isChecked())
        {
            emit removeProperty(QLatin1String("x"));
            QTimer::singleShot(200, [=]() { emit removeProperty(QLatin1String("y")); });
            QTimer::singleShot(400, [=]() { emit removeProperty(QLatin1String("width")); });
            QTimer::singleShot(600, [=]() { emit removeProperty(QLatin1String("height")); });
            QTimer::singleShot(800, [=]() { emit propertyChanged(QLatin1String("anchors.fill"), QLatin1String("parent")); });
        }
        else
        {
            emit removeProperty(QLatin1String("anchors.fill"));
            QTimer::singleShot(200, [=]() { emit propertyChanged(QLatin1String("x"), 0); });
            QTimer::singleShot(400, [=]() { emit propertyChanged(QLatin1String("y"), 0); });
            QTimer::singleShot(600, [=]() { emit propertyChanged(QLatin1String("width"), QLatin1String("parent.width")); });
            QTimer::singleShot(800, [=]() { emit propertyChanged(QLatin1String("height"), QLatin1String("parent.height")); });
        }
    });
}

HelperWidgetPlusForItem::~HelperWidgetPlusForItem()
{
    delete ui;
}

void HelperWidgetPlusForItem::setProperties(QmlJS::PropertyReader *propertyReader)
{
    //...
}

} //QmlDesigner
