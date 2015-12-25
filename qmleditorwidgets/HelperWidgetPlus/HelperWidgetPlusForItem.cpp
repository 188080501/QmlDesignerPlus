#include "HelperWidgetPlusForItem.h"
#include "ui_HelperWidgetPlusForItem.h"
#include "contextpanewidget.h"
#include "customcolordialog.h"
#include <qmljs/qmljspropertyreader.h>
#include <qmljs/qmljsutils.h>
#include <QDebug>
#include <QTimer>
#include <QString>

namespace QmlEditorWidgets {

HelperWidgetPlusForItem::HelperWidgetPlusForItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelperWidgetPlusForItem)
{
    ui->setupUi(this);

    connect(ui->checkBoxUseAnchors, &QCheckBox::clicked, [=](const bool &checked)
    {
        if(checked)
        {
            ui->spinBoxSyncSizeTopSpace->setValue(0);
            ui->spinBoxSyncSizeBottomSpace->setValue(0);
            ui->spinBoxSyncSizeLeftSpace->setValue(0);
            ui->spinBoxSyncSizeRightSpace->setValue(0);
        }
    });

    connect(ui->spinBoxSyncSizeTopSpace, (void(QSpinBox::*)(int))&QSpinBox::valueChanged, [=](const int &){ ui->checkBoxUseAnchors->setChecked(false); });
    connect(ui->spinBoxSyncSizeBottomSpace, (void(QSpinBox::*)(int))&QSpinBox::valueChanged, [=](const int &){ ui->checkBoxUseAnchors->setChecked(false); });
    connect(ui->spinBoxSyncSizeLeftSpace, (void(QSpinBox::*)(int))&QSpinBox::valueChanged, [=](const int &){ ui->checkBoxUseAnchors->setChecked(false); });
    connect(ui->spinBoxSyncSizeRightSpace, (void(QSpinBox::*)(int))&QSpinBox::valueChanged, [=](const int &){ ui->checkBoxUseAnchors->setChecked(false); });

    connect(ui->pushButtonSyncSizeFromParent, &QPushButton::clicked, [=]()
    {
        if(ui->checkBoxUseAnchors->isChecked())
        {
            QTimer::singleShot(0, [=](){ emit propertyChanged(QLatin1String("anchors.fill"), QLatin1String("parent")); });
            QTimer::singleShot(500, [=](){ emit removeProperty(QLatin1String("x")); });
            QTimer::singleShot(1000, [=](){ emit removeProperty(QLatin1String("y")); });
            QTimer::singleShot(1500, [=](){ emit removeProperty(QLatin1String("width")); });
            QTimer::singleShot(2000, [=](){ emit removeProperty(QLatin1String("height")); });
        }
        else
        {
            QTimer::singleShot(0, [=](){ emit propertyChanged(QLatin1String("x"), ui->spinBoxSyncSizeLeftSpace->value()); });
            QTimer::singleShot(500, [=](){ emit propertyChanged(QLatin1String("y"), ui->spinBoxSyncSizeTopSpace->value()); });

            if(ui->spinBoxSyncSizeLeftSpace->value())
            {
                if(ui->spinBoxSyncSizeRightSpace->value())
                {
                    QTimer::singleShot(1000, [=](){ emit propertyChanged(QLatin1String("width"), QLatin1String("parent.width - ") + QString::number(ui->spinBoxSyncSizeLeftSpace->value() + ui->spinBoxSyncSizeRightSpace->value())); });
                }
                else
                {
                    QTimer::singleShot(1000, [=](){ emit propertyChanged(QLatin1String("width"), QLatin1String("parent.width - ") + QString::number(ui->spinBoxSyncSizeLeftSpace->value())); });
                }
            }
            else
            {
                QTimer::singleShot(1000, [=](){ emit propertyChanged(QLatin1String("width"), QLatin1String("parent.width")); });
            }

            if(ui->spinBoxSyncSizeTopSpace->value())
            {
                if(ui->spinBoxSyncSizeRightSpace->value())
                {
                    QTimer::singleShot(1500, [=](){ emit propertyChanged(QLatin1String("height"), QLatin1String("parent.height - ") + QString::number(ui->spinBoxSyncSizeTopSpace->value() + ui->spinBoxSyncSizeRightSpace->value())); });
                }
                else
                {
                    QTimer::singleShot(1500, [=](){ emit propertyChanged(QLatin1String("height"), QLatin1String("parent.height - ") + QString::number(ui->spinBoxSyncSizeTopSpace->value())); });
                }
            }
            else
            {
                QTimer::singleShot(1500, [=](){ emit propertyChanged(QLatin1String("height"), QLatin1String("parent.height")); });
            }

            QTimer::singleShot(2000, [=](){ emit removeProperty(QLatin1String("anchors.fill")); });
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

} // QmlDesigner
