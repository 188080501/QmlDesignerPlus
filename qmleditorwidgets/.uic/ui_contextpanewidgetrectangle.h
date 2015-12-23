/********************************************************************************
** Form generated from reading UI file 'contextpanewidgetrectangle.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTEXTPANEWIDGETRECTANGLE_H
#define UI_CONTEXTPANEWIDGETRECTANGLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <qmleditorwidgets/colorbutton.h>
#include <qmleditorwidgets/gradientline.h>

QT_BEGIN_NAMESPACE

class Ui_ContextPaneWidgetRectangle
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QmlEditorWidgets::GradientLine *gradientLine;
    QLabel *gradientLabel;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QmlEditorWidgets::ColorButton *colorColorButton;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *colorSolid;
    QToolButton *colorGradient;
    QToolButton *colorNone;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QmlEditorWidgets::ColorButton *borderColorButton;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *borderSolid;
    QToolButton *borderNone;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBoxForRadius;

    void setupUi(QWidget *ContextPaneWidgetRectangle)
    {
        if (ContextPaneWidgetRectangle->objectName().isEmpty())
            ContextPaneWidgetRectangle->setObjectName(QStringLiteral("ContextPaneWidgetRectangle"));
        ContextPaneWidgetRectangle->resize(248, 148);
        gridLayout = new QGridLayout(ContextPaneWidgetRectangle);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(0, 2, 2, 2);
        label_2 = new QLabel(ContextPaneWidgetRectangle);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(ContextPaneWidgetRectangle);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        gradientLine = new QmlEditorWidgets::GradientLine(ContextPaneWidgetRectangle);
        gradientLine->setObjectName(QStringLiteral("gradientLine"));
        gradientLine->setMinimumSize(QSize(160, 50));
        gradientLine->setMaximumSize(QSize(240, 50));

        gridLayout->addWidget(gradientLine, 0, 1, 1, 5);

        gradientLabel = new QLabel(ContextPaneWidgetRectangle);
        gradientLabel->setObjectName(QStringLiteral("gradientLabel"));
        gradientLabel->setFont(font);
        gradientLabel->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout->addWidget(gradientLabel, 0, 0, 1, 1);

        label = new QLabel(ContextPaneWidgetRectangle);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 5, -1);
        colorColorButton = new QmlEditorWidgets::ColorButton(ContextPaneWidgetRectangle);
        colorColorButton->setObjectName(QStringLiteral("colorColorButton"));
        colorColorButton->setMinimumSize(QSize(22, 22));
        colorColorButton->setMaximumSize(QSize(22, 22));
        colorColorButton->setCheckable(true);

        horizontalLayout_3->addWidget(colorColorButton);

        widget_3 = new QWidget(ContextPaneWidgetRectangle);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        colorSolid = new QToolButton(widget_3);
        colorSolid->setObjectName(QStringLiteral("colorSolid"));
        colorSolid->setMinimumSize(QSize(30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qmldesigner/images/icon_color_solid.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorSolid->setIcon(icon);
        colorSolid->setCheckable(true);
        colorSolid->setAutoExclusive(true);

        horizontalLayout->addWidget(colorSolid);

        colorGradient = new QToolButton(widget_3);
        colorGradient->setObjectName(QStringLiteral("colorGradient"));
        colorGradient->setMinimumSize(QSize(30, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/qmldesigner/images/icon_color_gradient.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorGradient->setIcon(icon1);
        colorGradient->setCheckable(true);
        colorGradient->setAutoExclusive(true);

        horizontalLayout->addWidget(colorGradient);

        colorNone = new QToolButton(widget_3);
        colorNone->setObjectName(QStringLiteral("colorNone"));
        colorNone->setMinimumSize(QSize(30, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/qmldesigner/images/icon_color_none.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorNone->setIcon(icon2);
        colorNone->setCheckable(true);
        colorNone->setAutoExclusive(true);

        horizontalLayout->addWidget(colorNone);

        horizontalSpacer = new QSpacerItem(9, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_3->addWidget(widget_3);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 5, -1);
        borderColorButton = new QmlEditorWidgets::ColorButton(ContextPaneWidgetRectangle);
        borderColorButton->setObjectName(QStringLiteral("borderColorButton"));
        borderColorButton->setMinimumSize(QSize(22, 22));
        borderColorButton->setMaximumSize(QSize(22, 22));
        borderColorButton->setCheckable(true);

        horizontalLayout_4->addWidget(borderColorButton);

        widget_2 = new QWidget(ContextPaneWidgetRectangle);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        borderSolid = new QToolButton(widget_2);
        borderSolid->setObjectName(QStringLiteral("borderSolid"));
        borderSolid->setMinimumSize(QSize(30, 30));
        borderSolid->setIcon(icon);
        borderSolid->setCheckable(true);
        borderSolid->setAutoExclusive(true);

        horizontalLayout_2->addWidget(borderSolid);

        borderNone = new QToolButton(widget_2);
        borderNone->setObjectName(QStringLiteral("borderNone"));
        borderNone->setMinimumSize(QSize(30, 30));
        borderNone->setIcon(icon2);
        borderNone->setCheckable(true);
        borderNone->setAutoExclusive(true);

        horizontalLayout_2->addWidget(borderNone);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_4->addWidget(widget_2);


        gridLayout->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        spinBoxForRadius = new QSpinBox(ContextPaneWidgetRectangle);
        spinBoxForRadius->setObjectName(QStringLiteral("spinBoxForRadius"));
        spinBoxForRadius->setMinimumSize(QSize(50, 0));
        spinBoxForRadius->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(spinBoxForRadius, 3, 1, 1, 1);


        retranslateUi(ContextPaneWidgetRectangle);

        QMetaObject::connectSlotsByName(ContextPaneWidgetRectangle);
    } // setupUi

    void retranslateUi(QWidget *ContextPaneWidgetRectangle)
    {
        ContextPaneWidgetRectangle->setWindowTitle(QApplication::translate("ContextPaneWidgetRectangle", "Form", 0));
        label_2->setText(QApplication::translate("ContextPaneWidgetRectangle", "Color", 0));
        label_3->setText(QApplication::translate("ContextPaneWidgetRectangle", "Border", 0));
        gradientLabel->setText(QApplication::translate("ContextPaneWidgetRectangle", "Gradient", 0));
        label->setText(QApplication::translate("ContextPaneWidgetRectangle", "\345\274\247\345\272\246", 0));
        colorColorButton->setText(QApplication::translate("ContextPaneWidgetRectangle", "...", 0));
        colorSolid->setText(QString());
        colorGradient->setText(QString());
        colorNone->setText(QString());
        borderColorButton->setText(QApplication::translate("ContextPaneWidgetRectangle", "...", 0));
        borderSolid->setText(QString());
        borderNone->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ContextPaneWidgetRectangle: public Ui_ContextPaneWidgetRectangle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTEXTPANEWIDGETRECTANGLE_H
