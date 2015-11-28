/********************************************************************************
** Form generated from reading UI file 'settingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSPAGE_H
#define UI_SETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <utils/pathchooser.h>

namespace QmlDesigner {
namespace Internal {

class Ui_SettingsPage
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QSpinBox *spinItemSpacing;
    QLabel *snapMarginLabel;
    QSpinBox *spinSnapMargin;
    QLabel *itemSpacingLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *canvasWidthLabel;
    QLabel *canvasHeightLabel;
    QSpinBox *spinCanvasHeight;
    QSpinBox *spinCanvasWidth;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *styleLineEdit;
    QPushButton *resetStyle;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout;
    QRadioButton *useDefaultPuppetRadioButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    Utils::PathChooser *fallbackPuppetPathLineEdit;
    QPushButton *resetFallbackPuppetPathButton;
    QRadioButton *useQtRelatedPuppetRadioButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    Utils::PathChooser *puppetBuildPathLineEdit;
    QPushButton *resetQmlPuppetBuildPathButton;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QCheckBox *designerWarningsCheckBox;
    QCheckBox *designerWarningsInEditorCheckBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QCheckBox *designerShowDebuggerCheckBox;
    QCheckBox *designerEnableDebuggerCheckBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *QmlDesigner__Internal__SettingsPage)
    {
        if (QmlDesigner__Internal__SettingsPage->objectName().isEmpty())
            QmlDesigner__Internal__SettingsPage->setObjectName(QStringLiteral("QmlDesigner__Internal__SettingsPage"));
        QmlDesigner__Internal__SettingsPage->resize(601, 389);
        verticalLayout_3 = new QVBoxLayout(QmlDesigner__Internal__SettingsPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_3 = new QGroupBox(QmlDesigner__Internal__SettingsPage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spinItemSpacing = new QSpinBox(groupBox_3);
        spinItemSpacing->setObjectName(QStringLiteral("spinItemSpacing"));
        spinItemSpacing->setMaximum(50);

        gridLayout->addWidget(spinItemSpacing, 1, 1, 1, 1);

        snapMarginLabel = new QLabel(groupBox_3);
        snapMarginLabel->setObjectName(QStringLiteral("snapMarginLabel"));

        gridLayout->addWidget(snapMarginLabel, 0, 0, 1, 1);

        spinSnapMargin = new QSpinBox(groupBox_3);
        spinSnapMargin->setObjectName(QStringLiteral("spinSnapMargin"));
        spinSnapMargin->setMaximum(10);

        gridLayout->addWidget(spinSnapMargin, 0, 1, 1, 1);

        itemSpacingLabel = new QLabel(groupBox_3);
        itemSpacingLabel->setObjectName(QStringLiteral("itemSpacingLabel"));

        gridLayout->addWidget(itemSpacingLabel, 1, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_3);

        groupBox = new QGroupBox(QmlDesigner__Internal__SettingsPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        canvasWidthLabel = new QLabel(groupBox);
        canvasWidthLabel->setObjectName(QStringLiteral("canvasWidthLabel"));

        gridLayout_2->addWidget(canvasWidthLabel, 0, 0, 1, 1);

        canvasHeightLabel = new QLabel(groupBox);
        canvasHeightLabel->setObjectName(QStringLiteral("canvasHeightLabel"));

        gridLayout_2->addWidget(canvasHeightLabel, 1, 0, 1, 1);

        spinCanvasHeight = new QSpinBox(groupBox);
        spinCanvasHeight->setObjectName(QStringLiteral("spinCanvasHeight"));
        spinCanvasHeight->setMaximum(100000);
        spinCanvasHeight->setSingleStep(100);
        spinCanvasHeight->setValue(10000);

        gridLayout_2->addWidget(spinCanvasHeight, 1, 1, 1, 1);

        spinCanvasWidth = new QSpinBox(groupBox);
        spinCanvasWidth->setObjectName(QStringLiteral("spinCanvasWidth"));
        spinCanvasWidth->setMaximum(100000);
        spinCanvasWidth->setSingleStep(100);
        spinCanvasWidth->setValue(10000);

        gridLayout_2->addWidget(spinCanvasWidth, 0, 1, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_7 = new QGroupBox(QmlDesigner__Internal__SettingsPage);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(0, 0));
        horizontalLayout_6 = new QHBoxLayout(groupBox_7);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(groupBox_7);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        styleLineEdit = new QLineEdit(groupBox_7);
        styleLineEdit->setObjectName(QStringLiteral("styleLineEdit"));

        horizontalLayout_6->addWidget(styleLineEdit);

        resetStyle = new QPushButton(groupBox_7);
        resetStyle->setObjectName(QStringLiteral("resetStyle"));

        horizontalLayout_6->addWidget(resetStyle);


        horizontalLayout->addWidget(groupBox_7);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox_6 = new QGroupBox(QmlDesigner__Internal__SettingsPage);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout = new QVBoxLayout(groupBox_6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        useDefaultPuppetRadioButton = new QRadioButton(groupBox_6);
        useDefaultPuppetRadioButton->setObjectName(QStringLiteral("useDefaultPuppetRadioButton"));
        useDefaultPuppetRadioButton->setChecked(true);

        verticalLayout->addWidget(useDefaultPuppetRadioButton);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setIndent(20);

        horizontalLayout_4->addWidget(label_2);

        fallbackPuppetPathLineEdit = new Utils::PathChooser(groupBox_6);
        fallbackPuppetPathLineEdit->setObjectName(QStringLiteral("fallbackPuppetPathLineEdit"));
        fallbackPuppetPathLineEdit->setEnabled(true);

        horizontalLayout_4->addWidget(fallbackPuppetPathLineEdit);

        resetFallbackPuppetPathButton = new QPushButton(groupBox_6);
        resetFallbackPuppetPathButton->setObjectName(QStringLiteral("resetFallbackPuppetPathButton"));

        horizontalLayout_4->addWidget(resetFallbackPuppetPathButton);


        verticalLayout->addLayout(horizontalLayout_4);

        useQtRelatedPuppetRadioButton = new QRadioButton(groupBox_6);
        useQtRelatedPuppetRadioButton->setObjectName(QStringLiteral("useQtRelatedPuppetRadioButton"));

        verticalLayout->addWidget(useQtRelatedPuppetRadioButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(groupBox_6);
        label->setObjectName(QStringLiteral("label"));
        label->setIndent(20);

        horizontalLayout_3->addWidget(label);

        puppetBuildPathLineEdit = new Utils::PathChooser(groupBox_6);
        puppetBuildPathLineEdit->setObjectName(QStringLiteral("puppetBuildPathLineEdit"));
        puppetBuildPathLineEdit->setEnabled(true);

        horizontalLayout_3->addWidget(puppetBuildPathLineEdit);

        resetQmlPuppetBuildPathButton = new QPushButton(groupBox_6);
        resetQmlPuppetBuildPathButton->setObjectName(QStringLiteral("resetQmlPuppetBuildPathButton"));

        horizontalLayout_3->addWidget(resetQmlPuppetBuildPathButton);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox_6);

        groupBox_5 = new QGroupBox(QmlDesigner__Internal__SettingsPage);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox_5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        checkBox = new QCheckBox(groupBox_5);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_2->addWidget(checkBox);


        verticalLayout_3->addWidget(groupBox_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_2 = new QGroupBox(QmlDesigner__Internal__SettingsPage);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        designerWarningsCheckBox = new QCheckBox(groupBox_2);
        designerWarningsCheckBox->setObjectName(QStringLiteral("designerWarningsCheckBox"));

        gridLayout_3->addWidget(designerWarningsCheckBox, 0, 0, 1, 1);

        designerWarningsInEditorCheckBox = new QCheckBox(groupBox_2);
        designerWarningsInEditorCheckBox->setObjectName(QStringLiteral("designerWarningsInEditorCheckBox"));

        gridLayout_3->addWidget(designerWarningsInEditorCheckBox, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(QmlDesigner__Internal__SettingsPage);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        designerShowDebuggerCheckBox = new QCheckBox(groupBox_4);
        designerShowDebuggerCheckBox->setObjectName(QStringLiteral("designerShowDebuggerCheckBox"));

        gridLayout_4->addWidget(designerShowDebuggerCheckBox, 0, 0, 1, 1);

        designerEnableDebuggerCheckBox = new QCheckBox(groupBox_4);
        designerEnableDebuggerCheckBox->setObjectName(QStringLiteral("designerEnableDebuggerCheckBox"));

        gridLayout_4->addWidget(designerEnableDebuggerCheckBox, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 1, 1, 1);


        horizontalLayout_2->addWidget(groupBox_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        retranslateUi(QmlDesigner__Internal__SettingsPage);

        QMetaObject::connectSlotsByName(QmlDesigner__Internal__SettingsPage);
    } // setupUi

    void retranslateUi(QWidget *QmlDesigner__Internal__SettingsPage)
    {
        QmlDesigner__Internal__SettingsPage->setWindowTitle(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Form", 0));
        groupBox_3->setTitle(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Snapping", 0));
        snapMarginLabel->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Parent item padding:", 0));
        itemSpacingLabel->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Sibling item spacing:", 0));
        groupBox->setTitle(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Canvas", 0));
        canvasWidthLabel->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Width", 0));
        canvasHeightLabel->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Height", 0));
        groupBox_7->setTitle(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Styling", 0));
        label_3->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Controls style:", 0));
        styleLineEdit->setPlaceholderText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Default style", 0));
        resetStyle->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Reset Style", 0));
        groupBox_6->setTitle(QApplication::translate("QmlDesigner::Internal::SettingsPage", "QML Emulation Layer", 0));
#ifndef QT_NO_TOOLTIP
        useDefaultPuppetRadioButton->setToolTip(QApplication::translate("QmlDesigner::Internal::SettingsPage", "If you select this radio button, Qt Quick Designer always uses the QML emulation layer (QML Puppet) located at the following path.", 0));
#endif // QT_NO_TOOLTIP
        useDefaultPuppetRadioButton->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Use fallback QML emulation layer", 0));
        label_2->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Path:", 0));
#ifndef QT_NO_TOOLTIP
        fallbackPuppetPathLineEdit->setToolTip(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Path where Qt Creator can find the QML emulation layer executable (qmlpuppet).", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        resetFallbackPuppetPathButton->setToolTip(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Resets the path to the QML emulation layer that comes with Qt Creator.", 0));
#endif // QT_NO_TOOLTIP
        resetFallbackPuppetPathButton->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Reset Path", 0));
        useQtRelatedPuppetRadioButton->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Use QML emulation layer that is built by the selected Qt", 0));
        label->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Top level build path:", 0));
        resetQmlPuppetBuildPathButton->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Reset Path", 0));
        groupBox_5->setTitle(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Subcomponents", 0));
        checkBox->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Always save when leaving subcomponent in bread crumb", 0));
        groupBox_2->setTitle(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Warnings", 0));
#ifndef QT_NO_TOOLTIP
        designerWarningsCheckBox->setToolTip(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Warns about QML features that are not properly supported by the Qt Quick Designer.", 0));
#endif // QT_NO_TOOLTIP
        designerWarningsCheckBox->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Warn about unsupported features in the Qt Quick Designer", 0));
#ifndef QT_NO_TOOLTIP
        designerWarningsInEditorCheckBox->setToolTip(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Also warns in the code editor about QML features that are not properly supported by the Qt Quick Designer.", 0));
#endif // QT_NO_TOOLTIP
        designerWarningsInEditorCheckBox->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Warn about unsupported features of Qt Quick Designer in the code editor", 0));
        groupBox_4->setTitle(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Debugging", 0));
        designerShowDebuggerCheckBox->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Show the debugging view", 0));
        designerEnableDebuggerCheckBox->setText(QApplication::translate("QmlDesigner::Internal::SettingsPage", "Enable the debugging view", 0));
    } // retranslateUi

};

} // namespace Internal
} // namespace QmlDesigner

namespace QmlDesigner {
namespace Internal {
namespace Ui {
    class SettingsPage: public Ui_SettingsPage {};
} // namespace Ui
} // namespace Internal
} // namespace QmlDesigner

#endif // UI_SETTINGSPAGE_H
