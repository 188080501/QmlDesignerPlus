/********************************************************************************
** Form generated from reading UI file 'contextpanewidgetborderimage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTEXTPANEWIDGETBORDERIMAGE_H
#define UI_CONTEXTPANEWIDGETBORDERIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>
#include <qmleditorwidgets/filewidget.h>

QT_BEGIN_NAMESPACE

class Ui_ContextPaneWidgetBorderImage
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QmlEditorWidgets::FileWidget *fileWidget;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QRadioButton *horizontalStretchRadioButton;
    QRadioButton *horizontalTileRadioButton;
    QRadioButton *horizontalTileRadioButtonNoCrop;
    QWidget *widget;
    QGridLayout *gridLayout;
    QRadioButton *verticalTileRadioButton;
    QRadioButton *verticalStretchRadioButton;
    QRadioButton *verticalTileRadioButtonNoCrop;
    QLabel *sizeLabel;

    void setupUi(QWidget *ContextPaneWidgetBorderImage)
    {
        if (ContextPaneWidgetBorderImage->objectName().isEmpty())
            ContextPaneWidgetBorderImage->setObjectName(QStringLiteral("ContextPaneWidgetBorderImage"));
        ContextPaneWidgetBorderImage->resize(300, 97);
        gridLayout_3 = new QGridLayout(ContextPaneWidgetBorderImage);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setContentsMargins(1, 1, 1, 1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(ContextPaneWidgetBorderImage);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(76, 76));
        label->setMaximumSize(QSize(76, 76));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(57, 57, 57, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label->setPalette(palette);
        label->setAutoFillBackground(true);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label, 0, 0, 3, 1);

        fileWidget = new QmlEditorWidgets::FileWidget(ContextPaneWidgetBorderImage);
        fileWidget->setObjectName(QStringLiteral("fileWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileWidget->sizePolicy().hasHeightForWidth());
        fileWidget->setSizePolicy(sizePolicy);
        fileWidget->setMinimumSize(QSize(200, 0));
        fileWidget->setMaximumSize(QSize(200, 16777215));

        gridLayout_3->addWidget(fileWidget, 0, 1, 1, 1);

        widget_2 = new QWidget(ContextPaneWidgetBorderImage);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalStretchRadioButton = new QRadioButton(widget_2);
        horizontalStretchRadioButton->setObjectName(QStringLiteral("horizontalStretchRadioButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qmldesigner/images/horizontal-scale-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        horizontalStretchRadioButton->setIcon(icon);
        horizontalStretchRadioButton->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(horizontalStretchRadioButton, 0, 0, 1, 1);

        horizontalTileRadioButton = new QRadioButton(widget_2);
        horizontalTileRadioButton->setObjectName(QStringLiteral("horizontalTileRadioButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/qmldesigner/images/tile-icon-hor-crop.png"), QSize(), QIcon::Normal, QIcon::Off);
        horizontalTileRadioButton->setIcon(icon1);
        horizontalTileRadioButton->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(horizontalTileRadioButton, 0, 1, 1, 1);

        horizontalTileRadioButtonNoCrop = new QRadioButton(widget_2);
        horizontalTileRadioButtonNoCrop->setObjectName(QStringLiteral("horizontalTileRadioButtonNoCrop"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/qmldesigner/images/tile-icon-hor - scale.png"), QSize(), QIcon::Normal, QIcon::Off);
        horizontalTileRadioButtonNoCrop->setIcon(icon2);
        horizontalTileRadioButtonNoCrop->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(horizontalTileRadioButtonNoCrop, 0, 2, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 1, 1, 1);

        widget = new QWidget(ContextPaneWidgetBorderImage);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalTileRadioButton = new QRadioButton(widget);
        verticalTileRadioButton->setObjectName(QStringLiteral("verticalTileRadioButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/qmldesigner/images/tile-icon-vert-crop.png"), QSize(), QIcon::Normal, QIcon::Off);
        verticalTileRadioButton->setIcon(icon3);
        verticalTileRadioButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(verticalTileRadioButton, 0, 1, 1, 1);

        verticalStretchRadioButton = new QRadioButton(widget);
        verticalStretchRadioButton->setObjectName(QStringLiteral("verticalStretchRadioButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/qmldesigner/images/vertical-scale-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        verticalStretchRadioButton->setIcon(icon4);
        verticalStretchRadioButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(verticalStretchRadioButton, 0, 0, 1, 1);

        verticalTileRadioButtonNoCrop = new QRadioButton(widget);
        verticalTileRadioButtonNoCrop->setObjectName(QStringLiteral("verticalTileRadioButtonNoCrop"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/qmldesigner/images/tile-icon-vert-scale.png"), QSize(), QIcon::Normal, QIcon::Off);
        verticalTileRadioButtonNoCrop->setIcon(icon5);
        verticalTileRadioButtonNoCrop->setIconSize(QSize(24, 24));

        gridLayout->addWidget(verticalTileRadioButtonNoCrop, 0, 2, 1, 1);


        gridLayout_3->addWidget(widget, 2, 1, 1, 1);

        sizeLabel = new QLabel(ContextPaneWidgetBorderImage);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        sizeLabel->setFont(font);
        sizeLabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(sizeLabel, 3, 0, 1, 1);


        retranslateUi(ContextPaneWidgetBorderImage);

        QMetaObject::connectSlotsByName(ContextPaneWidgetBorderImage);
    } // setupUi

    void retranslateUi(QWidget *ContextPaneWidgetBorderImage)
    {
        ContextPaneWidgetBorderImage->setWindowTitle(QApplication::translate("ContextPaneWidgetBorderImage", "Form", 0));
#ifndef QT_NO_TOOLTIP
        ContextPaneWidgetBorderImage->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        horizontalStretchRadioButton->setToolTip(QApplication::translate("ContextPaneWidgetBorderImage", "Stretch vertically. Scales the image to fit to the available area.", 0));
#endif // QT_NO_TOOLTIP
        horizontalStretchRadioButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        horizontalTileRadioButton->setToolTip(QApplication::translate("ContextPaneWidgetBorderImage", "Repeat vertically. Tiles the image until there is no more space. May crop the last image.", 0));
#endif // QT_NO_TOOLTIP
        horizontalTileRadioButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        horizontalTileRadioButtonNoCrop->setToolTip(QApplication::translate("ContextPaneWidgetBorderImage", "Round. Like Repeat, but scales the images down to ensure that the last image is not cropped.", 0));
#endif // QT_NO_TOOLTIP
        horizontalTileRadioButtonNoCrop->setText(QString());
#ifndef QT_NO_TOOLTIP
        verticalTileRadioButton->setToolTip(QApplication::translate("ContextPaneWidgetBorderImage", "Repeat horizontally. Tiles the image until there is no more space. May crop the last image.", 0));
#endif // QT_NO_TOOLTIP
        verticalTileRadioButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        verticalStretchRadioButton->setToolTip(QApplication::translate("ContextPaneWidgetBorderImage", "Stretch horizontally. Scales the image to fit to the available area.", 0));
#endif // QT_NO_TOOLTIP
        verticalStretchRadioButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        verticalTileRadioButtonNoCrop->setToolTip(QApplication::translate("ContextPaneWidgetBorderImage", "Round. Like Repeat, but scales the images down to ensure that the last image is not cropped.", 0));
#endif // QT_NO_TOOLTIP
        verticalTileRadioButtonNoCrop->setText(QString());
        sizeLabel->setText(QApplication::translate("ContextPaneWidgetBorderImage", "10 x 10", 0));
    } // retranslateUi

};

namespace Ui {
    class ContextPaneWidgetBorderImage: public Ui_ContextPaneWidgetBorderImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTEXTPANEWIDGETBORDERIMAGE_H
