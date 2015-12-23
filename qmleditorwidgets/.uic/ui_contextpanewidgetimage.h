/********************************************************************************
** Form generated from reading UI file 'contextpanewidgetimage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTEXTPANEWIDGETIMAGE_H
#define UI_CONTEXTPANEWIDGETIMAGE_H

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

class Ui_ContextPaneWidgetImage
{
public:
    QGridLayout *gridLayout;
    QmlEditorWidgets::FileWidget *fileWidget;
    QRadioButton *stretchRadioButton;
    QRadioButton *horizontalStretchRadioButton;
    QRadioButton *verticalStretchRadioButton;
    QRadioButton *tileRadioButton;
    QRadioButton *preserveAspectFitRadioButton;
    QRadioButton *cropAspectFitRadioButton;
    QLabel *label;
    QLabel *sizeLabel;

    void setupUi(QWidget *ContextPaneWidgetImage)
    {
        if (ContextPaneWidgetImage->objectName().isEmpty())
            ContextPaneWidgetImage->setObjectName(QStringLiteral("ContextPaneWidgetImage"));
        ContextPaneWidgetImage->resize(282, 93);
        gridLayout = new QGridLayout(ContextPaneWidgetImage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 2, 2, 2);
        fileWidget = new QmlEditorWidgets::FileWidget(ContextPaneWidgetImage);
        fileWidget->setObjectName(QStringLiteral("fileWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileWidget->sizePolicy().hasHeightForWidth());
        fileWidget->setSizePolicy(sizePolicy);
        fileWidget->setMinimumSize(QSize(200, 0));
        fileWidget->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(fileWidget, 0, 1, 1, 3);

        stretchRadioButton = new QRadioButton(ContextPaneWidgetImage);
        stretchRadioButton->setObjectName(QStringLiteral("stretchRadioButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qmldesigner/images/scale-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        stretchRadioButton->setIcon(icon);
        stretchRadioButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(stretchRadioButton, 1, 1, 1, 1);

        horizontalStretchRadioButton = new QRadioButton(ContextPaneWidgetImage);
        horizontalStretchRadioButton->setObjectName(QStringLiteral("horizontalStretchRadioButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/qmldesigner/images/horizontal-scale-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        horizontalStretchRadioButton->setIcon(icon1);
        horizontalStretchRadioButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(horizontalStretchRadioButton, 1, 2, 1, 1);

        verticalStretchRadioButton = new QRadioButton(ContextPaneWidgetImage);
        verticalStretchRadioButton->setObjectName(QStringLiteral("verticalStretchRadioButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/qmldesigner/images/vertical-scale-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        verticalStretchRadioButton->setIcon(icon2);
        verticalStretchRadioButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(verticalStretchRadioButton, 1, 3, 1, 1);

        tileRadioButton = new QRadioButton(ContextPaneWidgetImage);
        tileRadioButton->setObjectName(QStringLiteral("tileRadioButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/qmldesigner/images/tile-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tileRadioButton->setIcon(icon3);
        tileRadioButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(tileRadioButton, 2, 1, 1, 1);

        preserveAspectFitRadioButton = new QRadioButton(ContextPaneWidgetImage);
        preserveAspectFitRadioButton->setObjectName(QStringLiteral("preserveAspectFitRadioButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/qmldesigner/images/aspect-fit-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        preserveAspectFitRadioButton->setIcon(icon4);
        preserveAspectFitRadioButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(preserveAspectFitRadioButton, 2, 2, 1, 1);

        cropAspectFitRadioButton = new QRadioButton(ContextPaneWidgetImage);
        cropAspectFitRadioButton->setObjectName(QStringLiteral("cropAspectFitRadioButton"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/qmldesigner/images/aspect-crop-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        cropAspectFitRadioButton->setIcon(icon5);
        cropAspectFitRadioButton->setIconSize(QSize(24, 24));

        gridLayout->addWidget(cropAspectFitRadioButton, 2, 3, 1, 1);

        label = new QLabel(ContextPaneWidgetImage);
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

        gridLayout->addWidget(label, 0, 0, 3, 1);

        sizeLabel = new QLabel(ContextPaneWidgetImage);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        sizeLabel->setFont(font);
        sizeLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(sizeLabel, 3, 0, 1, 1);


        retranslateUi(ContextPaneWidgetImage);

        QMetaObject::connectSlotsByName(ContextPaneWidgetImage);
    } // setupUi

    void retranslateUi(QWidget *ContextPaneWidgetImage)
    {
        ContextPaneWidgetImage->setWindowTitle(QApplication::translate("ContextPaneWidgetImage", "Form", 0));
#ifndef QT_NO_TOOLTIP
        stretchRadioButton->setToolTip(QApplication::translate("ContextPaneWidgetImage", "The image is scaled to fit.", 0));
#endif // QT_NO_TOOLTIP
        stretchRadioButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        horizontalStretchRadioButton->setToolTip(QApplication::translate("ContextPaneWidgetImage", "The image is stretched horizontally and tiled vertically.", 0));
#endif // QT_NO_TOOLTIP
        horizontalStretchRadioButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        verticalStretchRadioButton->setToolTip(QApplication::translate("ContextPaneWidgetImage", "The image is stretched vertically and tiled horizontally.", 0));
#endif // QT_NO_TOOLTIP
        verticalStretchRadioButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        tileRadioButton->setToolTip(QApplication::translate("ContextPaneWidgetImage", "The image is duplicated horizontally and vertically.", 0));
#endif // QT_NO_TOOLTIP
        tileRadioButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        preserveAspectFitRadioButton->setToolTip(QApplication::translate("ContextPaneWidgetImage", "The image is scaled uniformly to fit without cropping.", 0));
#endif // QT_NO_TOOLTIP
        preserveAspectFitRadioButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        cropAspectFitRadioButton->setToolTip(QApplication::translate("ContextPaneWidgetImage", "The image is scaled uniformly to fill, cropping if necessary.", 0));
#endif // QT_NO_TOOLTIP
        cropAspectFitRadioButton->setText(QString());
        label->setText(QString());
        sizeLabel->setText(QApplication::translate("ContextPaneWidgetImage", "10 x 10", 0));
    } // retranslateUi

};

namespace Ui {
    class ContextPaneWidgetImage: public Ui_ContextPaneWidgetImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTEXTPANEWIDGETIMAGE_H
