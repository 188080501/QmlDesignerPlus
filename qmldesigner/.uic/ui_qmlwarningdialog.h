/********************************************************************************
** Form generated from reading UI file 'qmlwarningdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMLWARNINGDIALOG_H
#define UI_QMLWARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

namespace QmlDesigner {

class Ui_QmlWarningDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *warnings;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QmlDesigner__QmlWarningDialog)
    {
        if (QmlDesigner__QmlWarningDialog->objectName().isEmpty())
            QmlDesigner__QmlWarningDialog->setObjectName(QStringLiteral("QmlDesigner__QmlWarningDialog"));
        QmlDesigner__QmlWarningDialog->resize(458, 229);
        QmlDesigner__QmlWarningDialog->setModal(true);
        verticalLayout = new QVBoxLayout(QmlDesigner__QmlWarningDialog);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(QmlDesigner__QmlWarningDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(440, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        warnings = new QLabel(QmlDesigner__QmlWarningDialog);
        warnings->setObjectName(QStringLiteral("warnings"));
        warnings->setMinimumSize(QSize(0, 120));
        warnings->setFrameShadow(QFrame::Raised);
        warnings->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        warnings->setMargin(6);

        verticalLayout->addWidget(warnings);

        checkBox = new QCheckBox(QmlDesigner__QmlWarningDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout->addWidget(checkBox);

        buttonBox = new QDialogButtonBox(QmlDesigner__QmlWarningDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ignore|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QmlDesigner__QmlWarningDialog);

        QMetaObject::connectSlotsByName(QmlDesigner__QmlWarningDialog);
    } // setupUi

    void retranslateUi(QDialog *QmlDesigner__QmlWarningDialog)
    {
        QmlDesigner__QmlWarningDialog->setWindowTitle(QApplication::translate("QmlDesigner::QmlWarningDialog", "Warning", 0));
        label->setText(QApplication::translate("QmlDesigner::QmlWarningDialog", "This QML file contains features which are not supported by Qt Quick Designer", 0));
        warnings->setText(QString());
        checkBox->setText(QApplication::translate("QmlDesigner::QmlWarningDialog", "Warn about unsupported features", 0));
    } // retranslateUi

};

} // namespace QmlDesigner

namespace QmlDesigner {
namespace Ui {
    class QmlWarningDialog: public Ui_QmlWarningDialog {};
} // namespace Ui
} // namespace QmlDesigner

#endif // UI_QMLWARNINGDIALOG_H
