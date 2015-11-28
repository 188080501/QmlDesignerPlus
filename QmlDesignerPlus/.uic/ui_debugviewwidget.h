/********************************************************************************
** Form generated from reading UI file 'debugviewwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGVIEWWIDGET_H
#define UI_DEBUGVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

namespace QmlDesigner {

class Ui_DebugViewWidget
{
public:
    QGridLayout *gridLayout;
    QTabWidget *instanceLog_2;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *modelLog;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *modelClear;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QPlainTextEdit *instanceLog;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QToolButton *instanceLogClear;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *instanceErrorLog;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *instanceErrorClear;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *enabledCheckBox;

    void setupUi(QWidget *QmlDesigner__DebugViewWidget)
    {
        if (QmlDesigner__DebugViewWidget->objectName().isEmpty())
            QmlDesigner__DebugViewWidget->setObjectName(QStringLiteral("QmlDesigner__DebugViewWidget"));
        QmlDesigner__DebugViewWidget->resize(400, 300);
        gridLayout = new QGridLayout(QmlDesigner__DebugViewWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        instanceLog_2 = new QTabWidget(QmlDesigner__DebugViewWidget);
        instanceLog_2->setObjectName(QStringLiteral("instanceLog_2"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        modelLog = new QPlainTextEdit(tab);
        modelLog->setObjectName(QStringLiteral("modelLog"));
        modelLog->setReadOnly(true);

        gridLayout_2->addWidget(modelLog, 1, 0, 1, 1);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        modelClear = new QToolButton(frame_2);
        modelClear->setObjectName(QStringLiteral("modelClear"));

        horizontalLayout_2->addWidget(modelClear);

        horizontalSpacer_2 = new QSpacerItem(337, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addWidget(frame_2, 0, 0, 1, 1);

        instanceLog_2->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setSpacing(2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(2, 2, 2, 2);
        instanceLog = new QPlainTextEdit(tab_3);
        instanceLog->setObjectName(QStringLiteral("instanceLog"));
        instanceLog->setReadOnly(true);

        gridLayout_4->addWidget(instanceLog, 1, 0, 1, 1);

        frame = new QFrame(tab_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        instanceLogClear = new QToolButton(frame);
        instanceLogClear->setObjectName(QStringLiteral("instanceLogClear"));

        horizontalLayout->addWidget(instanceLogClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

        instanceLog_2->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(2, 2, 2, 2);
        instanceErrorLog = new QPlainTextEdit(tab_2);
        instanceErrorLog->setObjectName(QStringLiteral("instanceErrorLog"));
        instanceErrorLog->setReadOnly(true);

        gridLayout_3->addWidget(instanceErrorLog, 1, 0, 1, 1);

        frame_3 = new QFrame(tab_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(0, 0));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        instanceErrorClear = new QToolButton(frame_3);
        instanceErrorClear->setObjectName(QStringLiteral("instanceErrorClear"));

        horizontalLayout_3->addWidget(instanceErrorClear);

        horizontalSpacer_3 = new QSpacerItem(337, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout_3->addWidget(frame_3, 0, 0, 1, 1);

        instanceLog_2->addTab(tab_2, QString());

        gridLayout->addWidget(instanceLog_2, 0, 0, 1, 1);

        enabledCheckBox = new QCheckBox(QmlDesigner__DebugViewWidget);
        enabledCheckBox->setObjectName(QStringLiteral("enabledCheckBox"));

        gridLayout->addWidget(enabledCheckBox, 1, 0, 1, 1);


        retranslateUi(QmlDesigner__DebugViewWidget);
        QObject::connect(modelClear, SIGNAL(clicked()), modelLog, SLOT(clear()));
        QObject::connect(instanceLogClear, SIGNAL(clicked()), instanceLog, SLOT(clear()));
        QObject::connect(instanceErrorClear, SIGNAL(clicked()), instanceErrorLog, SLOT(clear()));

        instanceLog_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QmlDesigner__DebugViewWidget);
    } // setupUi

    void retranslateUi(QWidget *QmlDesigner__DebugViewWidget)
    {
        QmlDesigner__DebugViewWidget->setWindowTitle(QApplication::translate("QmlDesigner::DebugViewWidget", "Debug", 0));
        modelClear->setText(QApplication::translate("QmlDesigner::DebugViewWidget", "Clear", 0));
        instanceLog_2->setTabText(instanceLog_2->indexOf(tab), QApplication::translate("QmlDesigner::DebugViewWidget", "Model Log", 0));
        instanceLogClear->setText(QApplication::translate("QmlDesigner::DebugViewWidget", "Clear", 0));
        instanceLog_2->setTabText(instanceLog_2->indexOf(tab_3), QApplication::translate("QmlDesigner::DebugViewWidget", "Instance Notifications", 0));
        instanceErrorClear->setText(QApplication::translate("QmlDesigner::DebugViewWidget", "Clear", 0));
        instanceLog_2->setTabText(instanceLog_2->indexOf(tab_2), QApplication::translate("QmlDesigner::DebugViewWidget", "Instance Errors", 0));
        enabledCheckBox->setText(QApplication::translate("QmlDesigner::DebugViewWidget", "Enabled", 0));
    } // retranslateUi

};

} // namespace QmlDesigner

namespace QmlDesigner {
namespace Ui {
    class DebugViewWidget: public Ui_DebugViewWidget {};
} // namespace Ui
} // namespace QmlDesigner

#endif // UI_DEBUGVIEWWIDGET_H
