/********************************************************************************
** Form generated from reading UI file 'puppetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUPPETDIALOG_H
#define UI_PUPPETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

namespace QmlDesigner {

class Ui_PuppetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *descriptionLabel;
    QTextEdit *copyAndPasteTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QmlDesigner__PuppetDialog)
    {
        if (QmlDesigner__PuppetDialog->objectName().isEmpty())
            QmlDesigner__PuppetDialog->setObjectName(QStringLiteral("QmlDesigner__PuppetDialog"));
        QmlDesigner__PuppetDialog->resize(1148, 344);
        verticalLayout = new QVBoxLayout(QmlDesigner__PuppetDialog);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        descriptionLabel = new QLabel(QmlDesigner__PuppetDialog);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(descriptionLabel->sizePolicy().hasHeightForWidth());
        descriptionLabel->setSizePolicy(sizePolicy);
        descriptionLabel->setWordWrap(true);

        verticalLayout->addWidget(descriptionLabel);

        copyAndPasteTextEdit = new QTextEdit(QmlDesigner__PuppetDialog);
        copyAndPasteTextEdit->setObjectName(QStringLiteral("copyAndPasteTextEdit"));
        sizePolicy.setHeightForWidth(copyAndPasteTextEdit->sizePolicy().hasHeightForWidth());
        copyAndPasteTextEdit->setSizePolicy(sizePolicy);
        copyAndPasteTextEdit->setReadOnly(true);

        verticalLayout->addWidget(copyAndPasteTextEdit);

        buttonBox = new QDialogButtonBox(QmlDesigner__PuppetDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QmlDesigner__PuppetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QmlDesigner__PuppetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QmlDesigner__PuppetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QmlDesigner__PuppetDialog);
    } // setupUi

    void retranslateUi(QDialog *QmlDesigner__PuppetDialog)
    {
        QmlDesigner__PuppetDialog->setWindowTitle(QApplication::translate("QmlDesigner::PuppetDialog", "Dialog", 0));
        descriptionLabel->setText(QString());
    } // retranslateUi

};

} // namespace QmlDesigner

namespace QmlDesigner {
namespace Ui {
    class PuppetDialog: public Ui_PuppetDialog {};
} // namespace Ui
} // namespace QmlDesigner

#endif // UI_PUPPETDIALOG_H
