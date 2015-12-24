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
