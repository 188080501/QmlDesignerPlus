/********************************************************************************
** Form generated from reading UI file 'contextpanetext.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTEXTPANETEXT_H
#define UI_CONTEXTPANETEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <qmleditorwidgets/colorbutton.h>

QT_BEGIN_NAMESPACE

class Ui_ContextPaneTextWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *topAlignmentButton;
    QToolButton *centerVAlignmentButton;
    QToolButton *bottomAlignmentButton;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QToolButton *leftAlignmentButton;
    QToolButton *centerHAlignmentButton;
    QToolButton *rightAlignmentButton;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QFontComboBox *fontComboBox;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QmlEditorWidgets::ColorButton *colorButton;
    QSpacerItem *horizontalSpacer;
    QSpinBox *fontSizeSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBoxForPx;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *boldButton;
    QToolButton *italicButton;
    QToolButton *underlineButton;
    QToolButton *strikeoutButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *styleLabel;
    QComboBox *styleComboBox;
    QSpacerItem *horizontalSpacer_8;
    QmlEditorWidgets::ColorButton *textColorButton;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QComboBox *comboBoxForWrapMode;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ContextPaneTextWidget)
    {
        if (ContextPaneTextWidget->objectName().isEmpty())
            ContextPaneTextWidget->setObjectName(QStringLiteral("ContextPaneTextWidget"));
        ContextPaneTextWidget->resize(394, 174);
        gridLayout = new QGridLayout(ContextPaneTextWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(4);
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        widget = new QWidget(ContextPaneTextWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        topAlignmentButton = new QToolButton(widget);
        topAlignmentButton->setObjectName(QStringLiteral("topAlignmentButton"));
        topAlignmentButton->setMinimumSize(QSize(34, 34));
        topAlignmentButton->setMaximumSize(QSize(34, 34));
        topAlignmentButton->setIconSize(QSize(24, 24));
        topAlignmentButton->setCheckable(true);
        topAlignmentButton->setAutoExclusive(true);

        horizontalLayout_3->addWidget(topAlignmentButton);

        centerVAlignmentButton = new QToolButton(widget);
        centerVAlignmentButton->setObjectName(QStringLiteral("centerVAlignmentButton"));
        centerVAlignmentButton->setMinimumSize(QSize(34, 34));
        centerVAlignmentButton->setMaximumSize(QSize(34, 34));
        centerVAlignmentButton->setIconSize(QSize(24, 24));
        centerVAlignmentButton->setCheckable(true);
        centerVAlignmentButton->setAutoExclusive(true);

        horizontalLayout_3->addWidget(centerVAlignmentButton);

        bottomAlignmentButton = new QToolButton(widget);
        bottomAlignmentButton->setObjectName(QStringLiteral("bottomAlignmentButton"));
        bottomAlignmentButton->setMinimumSize(QSize(34, 34));
        bottomAlignmentButton->setMaximumSize(QSize(34, 34));
        bottomAlignmentButton->setIconSize(QSize(24, 24));
        bottomAlignmentButton->setCheckable(true);
        bottomAlignmentButton->setAutoExclusive(true);

        horizontalLayout_3->addWidget(bottomAlignmentButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        gridLayout->addWidget(widget, 2, 5, 1, 3);

        widget_2 = new QWidget(ContextPaneTextWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_5 = new QHBoxLayout(widget_2);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        leftAlignmentButton = new QToolButton(widget_2);
        leftAlignmentButton->setObjectName(QStringLiteral("leftAlignmentButton"));
        leftAlignmentButton->setMinimumSize(QSize(34, 34));
        leftAlignmentButton->setMaximumSize(QSize(34, 34));
        leftAlignmentButton->setIconSize(QSize(24, 24));
        leftAlignmentButton->setCheckable(true);
        leftAlignmentButton->setAutoExclusive(true);

        horizontalLayout->addWidget(leftAlignmentButton);

        centerHAlignmentButton = new QToolButton(widget_2);
        centerHAlignmentButton->setObjectName(QStringLiteral("centerHAlignmentButton"));
        centerHAlignmentButton->setMinimumSize(QSize(34, 34));
        centerHAlignmentButton->setMaximumSize(QSize(34, 34));
        centerHAlignmentButton->setIconSize(QSize(24, 24));
        centerHAlignmentButton->setCheckable(true);
        centerHAlignmentButton->setAutoExclusive(true);

        horizontalLayout->addWidget(centerHAlignmentButton);

        rightAlignmentButton = new QToolButton(widget_2);
        rightAlignmentButton->setObjectName(QStringLiteral("rightAlignmentButton"));
        rightAlignmentButton->setMinimumSize(QSize(34, 34));
        rightAlignmentButton->setMaximumSize(QSize(34, 34));
        rightAlignmentButton->setIconSize(QSize(24, 24));
        rightAlignmentButton->setCheckable(true);
        rightAlignmentButton->setAutoExclusive(true);

        horizontalLayout->addWidget(rightAlignmentButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        horizontalLayout_5->addLayout(horizontalLayout);


        gridLayout->addWidget(widget_2, 1, 5, 1, 3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_2 = new QLabel(ContextPaneTextWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(40, 33));
        label_2->setMaximumSize(QSize(40, 33));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_2);

        fontComboBox = new QFontComboBox(ContextPaneTextWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setMinimumSize(QSize(0, 26));
        fontComboBox->setMaximumSize(QSize(150, 26));

        horizontalLayout_9->addWidget(fontComboBox);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout_9, 0, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, -1, 0, -1);
        colorButton = new QmlEditorWidgets::ColorButton(ContextPaneTextWidget);
        colorButton->setObjectName(QStringLiteral("colorButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(22);
        sizePolicy.setVerticalStretch(22);
        sizePolicy.setHeightForWidth(colorButton->sizePolicy().hasHeightForWidth());
        colorButton->setSizePolicy(sizePolicy);
        colorButton->setMinimumSize(QSize(25, 25));
        colorButton->setMaximumSize(QSize(25, 25));
        colorButton->setCheckable(true);

        horizontalLayout_7->addWidget(colorButton);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        fontSizeSpinBox = new QSpinBox(ContextPaneTextWidget);
        fontSizeSpinBox->setObjectName(QStringLiteral("fontSizeSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontSizeSpinBox->sizePolicy().hasHeightForWidth());
        fontSizeSpinBox->setSizePolicy(sizePolicy1);
        fontSizeSpinBox->setMinimumSize(QSize(50, 27));
        fontSizeSpinBox->setMaximumSize(QSize(50, 27));

        horizontalLayout_7->addWidget(fontSizeSpinBox);

        horizontalSpacer_2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        checkBoxForPx = new QCheckBox(ContextPaneTextWidget);
        checkBoxForPx->setObjectName(QStringLiteral("checkBoxForPx"));
        checkBoxForPx->setAutoExclusive(false);

        horizontalLayout_7->addWidget(checkBoxForPx);


        gridLayout->addLayout(horizontalLayout_7, 0, 5, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        boldButton = new QToolButton(ContextPaneTextWidget);
        boldButton->setObjectName(QStringLiteral("boldButton"));
        boldButton->setMinimumSize(QSize(34, 34));
        boldButton->setMaximumSize(QSize(34, 34));
        boldButton->setIconSize(QSize(24, 24));
        boldButton->setCheckable(true);

        horizontalLayout_2->addWidget(boldButton);

        italicButton = new QToolButton(ContextPaneTextWidget);
        italicButton->setObjectName(QStringLiteral("italicButton"));
        italicButton->setMinimumSize(QSize(34, 34));
        italicButton->setMaximumSize(QSize(34, 34));
        italicButton->setIconSize(QSize(24, 24));
        italicButton->setCheckable(true);

        horizontalLayout_2->addWidget(italicButton);

        underlineButton = new QToolButton(ContextPaneTextWidget);
        underlineButton->setObjectName(QStringLiteral("underlineButton"));
        underlineButton->setMinimumSize(QSize(34, 34));
        underlineButton->setMaximumSize(QSize(34, 34));
        underlineButton->setIconSize(QSize(24, 24));
        underlineButton->setCheckable(true);

        horizontalLayout_2->addWidget(underlineButton);

        strikeoutButton = new QToolButton(ContextPaneTextWidget);
        strikeoutButton->setObjectName(QStringLiteral("strikeoutButton"));
        strikeoutButton->setMinimumSize(QSize(34, 34));
        strikeoutButton->setMaximumSize(QSize(34, 34));
        strikeoutButton->setIconSize(QSize(24, 24));
        strikeoutButton->setCheckable(true);

        horizontalLayout_2->addWidget(strikeoutButton);


        gridLayout->addLayout(horizontalLayout_2, 3, 5, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        styleLabel = new QLabel(ContextPaneTextWidget);
        styleLabel->setObjectName(QStringLiteral("styleLabel"));
        styleLabel->setMinimumSize(QSize(40, 33));
        styleLabel->setMaximumSize(QSize(40, 33));
        styleLabel->setFont(font);
        styleLabel->setText(QStringLiteral("Style"));
        styleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(styleLabel);

        styleComboBox = new QComboBox(ContextPaneTextWidget);
        styleComboBox->insertItems(0, QStringList()
         << QStringLiteral("Normal")
         << QStringLiteral("Outline")
         << QStringLiteral("Raised")
         << QStringLiteral("Sunken")
        );
        styleComboBox->setObjectName(QStringLiteral("styleComboBox"));
        styleComboBox->setMinimumSize(QSize(120, 26));
        styleComboBox->setMaximumSize(QSize(120, 26));

        horizontalLayout_6->addWidget(styleComboBox);

        horizontalSpacer_8 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        textColorButton = new QmlEditorWidgets::ColorButton(ContextPaneTextWidget);
        textColorButton->setObjectName(QStringLiteral("textColorButton"));
        sizePolicy.setHeightForWidth(textColorButton->sizePolicy().hasHeightForWidth());
        textColorButton->setSizePolicy(sizePolicy);
        textColorButton->setMinimumSize(QSize(25, 25));
        textColorButton->setMaximumSize(QSize(25, 25));
        textColorButton->setCheckable(true);

        horizontalLayout_6->addWidget(textColorButton);

        horizontalSpacer_7 = new QSpacerItem(5, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_6, 1, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label = new QLabel(ContextPaneTextWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(40, 33));
        label->setMaximumSize(QSize(40, 33));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label);

        comboBoxForWrapMode = new QComboBox(ContextPaneTextWidget);
        comboBoxForWrapMode->setObjectName(QStringLiteral("comboBoxForWrapMode"));
        comboBoxForWrapMode->setMinimumSize(QSize(120, 26));
        comboBoxForWrapMode->setMaximumSize(QSize(120, 26));

        horizontalLayout_8->addWidget(comboBoxForWrapMode);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_8, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 4, 5, 1, 1);


        retranslateUi(ContextPaneTextWidget);

        QMetaObject::connectSlotsByName(ContextPaneTextWidget);
    } // setupUi

    void retranslateUi(QWidget *ContextPaneTextWidget)
    {
        ContextPaneTextWidget->setWindowTitle(QApplication::translate("ContextPaneTextWidget", "Text", 0));
        topAlignmentButton->setText(QString());
        centerVAlignmentButton->setText(QString());
        bottomAlignmentButton->setText(QString());
        leftAlignmentButton->setText(QString());
        centerHAlignmentButton->setText(QString());
        rightAlignmentButton->setText(QString());
        label_2->setText(QApplication::translate("ContextPaneTextWidget", "Font", 0));
        colorButton->setText(QApplication::translate("ContextPaneTextWidget", "...", 0));
        checkBoxForPx->setText(QApplication::translate("ContextPaneTextWidget", "px", 0));
        boldButton->setText(QString());
        italicButton->setText(QString());
        underlineButton->setText(QString());
        strikeoutButton->setText(QString());
        textColorButton->setText(QApplication::translate("ContextPaneTextWidget", "...", 0));
        label->setText(QApplication::translate("ContextPaneTextWidget", "Wrap", 0));
        comboBoxForWrapMode->clear();
        comboBoxForWrapMode->insertItems(0, QStringList()
         << QApplication::translate("ContextPaneTextWidget", "NoWrap", 0)
         << QApplication::translate("ContextPaneTextWidget", "WordWrap", 0)
         << QApplication::translate("ContextPaneTextWidget", "WrapAnywhere", 0)
         << QApplication::translate("ContextPaneTextWidget", "Wrap", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class ContextPaneTextWidget: public Ui_ContextPaneTextWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTEXTPANETEXT_H
