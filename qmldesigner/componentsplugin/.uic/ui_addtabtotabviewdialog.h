/********************************************************************************
** Form generated from reading UI file 'addtabtotabviewdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTABTOTABVIEWDIALOG_H
#define UI_ADDTABTOTABVIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <utils/filenamevalidatinglineedit.h>

namespace QmlDesigner {

class Ui_AddTabToTabViewDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *addTabLabel;
    Utils::FileNameValidatingLineEdit *addTabLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QmlDesigner__AddTabToTabViewDialog)
    {
        if (QmlDesigner__AddTabToTabViewDialog->objectName().isEmpty())
            QmlDesigner__AddTabToTabViewDialog->setObjectName(QStringLiteral("QmlDesigner__AddTabToTabViewDialog"));
        QmlDesigner__AddTabToTabViewDialog->resize(362, 80);
        verticalLayout = new QVBoxLayout(QmlDesigner__AddTabToTabViewDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addTabLabel = new QLabel(QmlDesigner__AddTabToTabViewDialog);
        addTabLabel->setObjectName(QStringLiteral("addTabLabel"));

        horizontalLayout->addWidget(addTabLabel);

        addTabLineEdit = new Utils::FileNameValidatingLineEdit(QmlDesigner__AddTabToTabViewDialog);
        addTabLineEdit->setObjectName(QStringLiteral("addTabLineEdit"));

        horizontalLayout->addWidget(addTabLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(QmlDesigner__AddTabToTabViewDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QmlDesigner__AddTabToTabViewDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QmlDesigner__AddTabToTabViewDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QmlDesigner__AddTabToTabViewDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QmlDesigner__AddTabToTabViewDialog);
    } // setupUi

    void retranslateUi(QDialog *QmlDesigner__AddTabToTabViewDialog)
    {
        QmlDesigner__AddTabToTabViewDialog->setWindowTitle(QApplication::translate("QmlDesigner::AddTabToTabViewDialog", "Dialog", 0));
        addTabLabel->setText(QApplication::translate("QmlDesigner::AddTabToTabViewDialog", "Add tab:", 0));
    } // retranslateUi

};

} // namespace QmlDesigner

namespace QmlDesigner {
namespace Ui {
    class AddTabToTabViewDialog: public Ui_AddTabToTabViewDialog {};
} // namespace Ui
} // namespace QmlDesigner

#endif // UI_ADDTABTOTABVIEWDIALOG_H
