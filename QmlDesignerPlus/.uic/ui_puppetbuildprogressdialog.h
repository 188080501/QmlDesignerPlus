/********************************************************************************
** Form generated from reading UI file 'puppetbuildprogressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUPPETBUILDPROGRESSDIALOG_H
#define UI_PUPPETBUILDPROGRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

namespace QmlDesigner {

class Ui_PuppetBuildProgressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QProgressBar *buildProgressBar;
    QHBoxLayout *horizontalLayout;
    QLabel *openErrorOutputFileLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *useFallbackPuppetPushButton;

    void setupUi(QDialog *QmlDesigner__PuppetBuildProgressDialog)
    {
        if (QmlDesigner__PuppetBuildProgressDialog->objectName().isEmpty())
            QmlDesigner__PuppetBuildProgressDialog->setObjectName(QStringLiteral("QmlDesigner__PuppetBuildProgressDialog"));
        QmlDesigner__PuppetBuildProgressDialog->resize(695, 99);
        QmlDesigner__PuppetBuildProgressDialog->setModal(true);
        verticalLayout = new QVBoxLayout(QmlDesigner__PuppetBuildProgressDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(QmlDesigner__PuppetBuildProgressDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        buildProgressBar = new QProgressBar(QmlDesigner__PuppetBuildProgressDialog);
        buildProgressBar->setObjectName(QStringLiteral("buildProgressBar"));
        buildProgressBar->setValue(0);

        verticalLayout->addWidget(buildProgressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openErrorOutputFileLabel = new QLabel(QmlDesigner__PuppetBuildProgressDialog);
        openErrorOutputFileLabel->setObjectName(QStringLiteral("openErrorOutputFileLabel"));
        openErrorOutputFileLabel->setOpenExternalLinks(true);
        openErrorOutputFileLabel->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        horizontalLayout->addWidget(openErrorOutputFileLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        useFallbackPuppetPushButton = new QPushButton(QmlDesigner__PuppetBuildProgressDialog);
        useFallbackPuppetPushButton->setObjectName(QStringLiteral("useFallbackPuppetPushButton"));
        useFallbackPuppetPushButton->setAutoDefault(false);

        horizontalLayout->addWidget(useFallbackPuppetPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QmlDesigner__PuppetBuildProgressDialog);

        QMetaObject::connectSlotsByName(QmlDesigner__PuppetBuildProgressDialog);
    } // setupUi

    void retranslateUi(QDialog *QmlDesigner__PuppetBuildProgressDialog)
    {
        QmlDesigner__PuppetBuildProgressDialog->setWindowTitle(QApplication::translate("QmlDesigner::PuppetBuildProgressDialog", "Build Progress", 0));
        label->setText(QApplication::translate("QmlDesigner::PuppetBuildProgressDialog", "Build Adapter for the current Qt. Happens only once for every Qt installation.", 0));
        openErrorOutputFileLabel->setText(QApplication::translate("QmlDesigner::PuppetBuildProgressDialog", "Open error output file", 0));
        useFallbackPuppetPushButton->setText(QApplication::translate("QmlDesigner::PuppetBuildProgressDialog", "Use Fallback QML Emulation Layer", 0));
    } // retranslateUi

};

} // namespace QmlDesigner

namespace QmlDesigner {
namespace Ui {
    class PuppetBuildProgressDialog: public Ui_PuppetBuildProgressDialog {};
} // namespace Ui
} // namespace QmlDesigner

#endif // UI_PUPPETBUILDPROGRESSDIALOG_H
