/********************************************************************************
** Form generated from reading UI file 'connectionviewwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONVIEWWIDGET_H
#define UI_CONNECTIONVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

namespace QmlDesigner {

class Ui_ConnectionViewWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widgetSpacer;
    QTabBar *tabBar;
    QStackedWidget *stackedWidget;
    QWidget *connectionViewPage;
    QGridLayout *gridLayout_3;
    QTableView *connectionView;
    QWidget *bindingViewPage;
    QGridLayout *gridLayout_2;
    QTableView *bindingView;
    QWidget *dynamicPropertiesPage;
    QGridLayout *gridLayout_4;
    QTableView *dynamicPropertiesView;

    void setupUi(QWidget *QmlDesigner__ConnectionViewWidget)
    {
        if (QmlDesigner__ConnectionViewWidget->objectName().isEmpty())
            QmlDesigner__ConnectionViewWidget->setObjectName(QStringLiteral("QmlDesigner__ConnectionViewWidget"));
        QmlDesigner__ConnectionViewWidget->resize(994, 611);
        gridLayout = new QGridLayout(QmlDesigner__ConnectionViewWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widgetSpacer = new QWidget(QmlDesigner__ConnectionViewWidget);
        widgetSpacer->setObjectName(QStringLiteral("widgetSpacer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetSpacer->sizePolicy().hasHeightForWidth());
        widgetSpacer->setSizePolicy(sizePolicy);
        widgetSpacer->setMinimumSize(QSize(0, 4));
        widgetSpacer->setMaximumSize(QSize(16777215, 4));

        gridLayout->addWidget(widgetSpacer, 1, 0, 1, 1);

        tabBar = new QTabBar(QmlDesigner__ConnectionViewWidget);
        tabBar->setObjectName(QStringLiteral("tabBar"));

        gridLayout->addWidget(tabBar, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(QmlDesigner__ConnectionViewWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        connectionViewPage = new QWidget();
        connectionViewPage->setObjectName(QStringLiteral("connectionViewPage"));
        gridLayout_3 = new QGridLayout(connectionViewPage);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        connectionView = new QTableView(connectionViewPage);
        connectionView->setObjectName(QStringLiteral("connectionView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(connectionView->sizePolicy().hasHeightForWidth());
        connectionView->setSizePolicy(sizePolicy1);
        connectionView->setAlternatingRowColors(true);
        connectionView->setSelectionMode(QAbstractItemView::SingleSelection);
        connectionView->setSelectionBehavior(QAbstractItemView::SelectRows);
        connectionView->setShowGrid(false);
        connectionView->setCornerButtonEnabled(false);
        connectionView->horizontalHeader()->setHighlightSections(false);
        connectionView->horizontalHeader()->setStretchLastSection(true);
        connectionView->verticalHeader()->setVisible(false);
        connectionView->verticalHeader()->setHighlightSections(false);

        gridLayout_3->addWidget(connectionView, 3, 0, 1, 5);

        stackedWidget->addWidget(connectionViewPage);
        bindingViewPage = new QWidget();
        bindingViewPage->setObjectName(QStringLiteral("bindingViewPage"));
        gridLayout_2 = new QGridLayout(bindingViewPage);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        bindingView = new QTableView(bindingViewPage);
        bindingView->setObjectName(QStringLiteral("bindingView"));
        bindingView->setAlternatingRowColors(true);
        bindingView->setSelectionMode(QAbstractItemView::SingleSelection);
        bindingView->setSelectionBehavior(QAbstractItemView::SelectRows);
        bindingView->setShowGrid(false);
        bindingView->setCornerButtonEnabled(false);
        bindingView->horizontalHeader()->setHighlightSections(false);
        bindingView->horizontalHeader()->setStretchLastSection(true);
        bindingView->verticalHeader()->setVisible(false);
        bindingView->verticalHeader()->setHighlightSections(false);

        gridLayout_2->addWidget(bindingView, 2, 0, 1, 3);

        stackedWidget->addWidget(bindingViewPage);
        dynamicPropertiesPage = new QWidget();
        dynamicPropertiesPage->setObjectName(QStringLiteral("dynamicPropertiesPage"));
        gridLayout_4 = new QGridLayout(dynamicPropertiesPage);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        dynamicPropertiesView = new QTableView(dynamicPropertiesPage);
        dynamicPropertiesView->setObjectName(QStringLiteral("dynamicPropertiesView"));
        dynamicPropertiesView->setAlternatingRowColors(true);
        dynamicPropertiesView->setSelectionMode(QAbstractItemView::SingleSelection);
        dynamicPropertiesView->setSelectionBehavior(QAbstractItemView::SelectRows);
        dynamicPropertiesView->setShowGrid(false);
        dynamicPropertiesView->setCornerButtonEnabled(false);
        dynamicPropertiesView->horizontalHeader()->setHighlightSections(false);
        dynamicPropertiesView->horizontalHeader()->setStretchLastSection(true);
        dynamicPropertiesView->verticalHeader()->setVisible(false);
        dynamicPropertiesView->verticalHeader()->setHighlightSections(false);

        gridLayout_4->addWidget(dynamicPropertiesView, 0, 0, 1, 1);

        stackedWidget->addWidget(dynamicPropertiesPage);

        gridLayout->addWidget(stackedWidget, 2, 0, 1, 1);

        stackedWidget->raise();
        tabBar->raise();
        widgetSpacer->raise();

        retranslateUi(QmlDesigner__ConnectionViewWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QmlDesigner__ConnectionViewWidget);
    } // setupUi

    void retranslateUi(QWidget *QmlDesigner__ConnectionViewWidget)
    {
        QmlDesigner__ConnectionViewWidget->setWindowTitle(QApplication::translate("QmlDesigner::ConnectionViewWidget", "Connections", 0));
    } // retranslateUi

};

} // namespace QmlDesigner

namespace QmlDesigner {
namespace Ui {
    class ConnectionViewWidget: public Ui_ConnectionViewWidget {};
} // namespace Ui
} // namespace QmlDesigner

#endif // UI_CONNECTIONVIEWWIDGET_H
