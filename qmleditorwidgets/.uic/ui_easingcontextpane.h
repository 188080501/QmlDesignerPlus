/********************************************************************************
** Form generated from reading UI file 'easingcontextpane.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EASINGCONTEXTPANE_H
#define UI_EASINGCONTEXTPANE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EasingContextPane
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QPushButton *playButton;
    QLabel *label_5;
    QComboBox *easingShapeComboBox;
    QLabel *label_6;
    QComboBox *easingExtremesComboBox;
    QLabel *label_2;
    QSpinBox *durationSpinBox;
    QLabel *label;
    QDoubleSpinBox *amplitudeSpinBox;
    QLabel *label_3;
    QDoubleSpinBox *periodSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *overshootSpinBox;

    void setupUi(QWidget *EasingContextPane)
    {
        if (EasingContextPane->objectName().isEmpty())
            EasingContextPane->setObjectName(QStringLiteral("EasingContextPane"));
        EasingContextPane->resize(257, 163);
        gridLayout = new QGridLayout(EasingContextPane);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 3, 3, 3);
        graphicsView = new QGraphicsView(EasingContextPane);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setInteractive(false);

        gridLayout->addWidget(graphicsView, 0, 0, 1, 4);

        playButton = new QPushButton(EasingContextPane);
        playButton->setObjectName(QStringLiteral("playButton"));
        playButton->setMinimumSize(QSize(0, 83));
        playButton->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(playButton, 0, 4, 1, 1);

        label_5 = new QLabel(EasingContextPane);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        easingShapeComboBox = new QComboBox(EasingContextPane);
        easingShapeComboBox->insertItems(0, QStringList()
         << QStringLiteral("Linear")
         << QStringLiteral("Quad")
         << QStringLiteral("Cubic")
         << QStringLiteral("Quart")
         << QStringLiteral("Quint")
         << QStringLiteral("Sine")
         << QStringLiteral("Expo")
         << QStringLiteral("Circ")
         << QStringLiteral("Elastic")
         << QStringLiteral("Back")
         << QStringLiteral("Bounce")
        );
        easingShapeComboBox->setObjectName(QStringLiteral("easingShapeComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(easingShapeComboBox->sizePolicy().hasHeightForWidth());
        easingShapeComboBox->setSizePolicy(sizePolicy);
        easingShapeComboBox->setMaximumSize(QSize(70, 16777215));

        gridLayout->addWidget(easingShapeComboBox, 1, 1, 1, 1);

        label_6 = new QLabel(EasingContextPane);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        easingExtremesComboBox = new QComboBox(EasingContextPane);
        easingExtremesComboBox->insertItems(0, QStringList()
         << QStringLiteral("In")
         << QStringLiteral("Out")
         << QStringLiteral("InOut")
         << QStringLiteral("OutIn")
        );
        easingExtremesComboBox->setObjectName(QStringLiteral("easingExtremesComboBox"));
        sizePolicy.setHeightForWidth(easingExtremesComboBox->sizePolicy().hasHeightForWidth());
        easingExtremesComboBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(easingExtremesComboBox, 1, 3, 1, 2);

        label_2 = new QLabel(EasingContextPane);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        durationSpinBox = new QSpinBox(EasingContextPane);
        durationSpinBox->setObjectName(QStringLiteral("durationSpinBox"));
        durationSpinBox->setMaximumSize(QSize(70, 16777215));
        durationSpinBox->setKeyboardTracking(false);
        durationSpinBox->setMinimum(-1);
        durationSpinBox->setMaximum(9999999);
        durationSpinBox->setSingleStep(10);
        durationSpinBox->setValue(250);

        gridLayout->addWidget(durationSpinBox, 2, 1, 1, 1);

        label = new QLabel(EasingContextPane);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 2, 2, 1, 1);

        amplitudeSpinBox = new QDoubleSpinBox(EasingContextPane);
        amplitudeSpinBox->setObjectName(QStringLiteral("amplitudeSpinBox"));
        amplitudeSpinBox->setMaximumSize(QSize(70, 16777215));
        amplitudeSpinBox->setKeyboardTracking(false);
        amplitudeSpinBox->setDecimals(3);
        amplitudeSpinBox->setMaximum(1e+06);
        amplitudeSpinBox->setSingleStep(0.05);
        amplitudeSpinBox->setValue(1);

        gridLayout->addWidget(amplitudeSpinBox, 2, 3, 1, 2);

        label_3 = new QLabel(EasingContextPane);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        periodSpinBox = new QDoubleSpinBox(EasingContextPane);
        periodSpinBox->setObjectName(QStringLiteral("periodSpinBox"));
        periodSpinBox->setMaximumSize(QSize(70, 16777215));
        periodSpinBox->setKeyboardTracking(false);
        periodSpinBox->setDecimals(3);
        periodSpinBox->setMaximum(1e+06);
        periodSpinBox->setSingleStep(0.01);
        periodSpinBox->setValue(0.3);

        gridLayout->addWidget(periodSpinBox, 3, 1, 1, 1);

        label_4 = new QLabel(EasingContextPane);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 2, 1, 1);

        overshootSpinBox = new QDoubleSpinBox(EasingContextPane);
        overshootSpinBox->setObjectName(QStringLiteral("overshootSpinBox"));
        overshootSpinBox->setMaximumSize(QSize(70, 16777215));
        overshootSpinBox->setKeyboardTracking(false);
        overshootSpinBox->setDecimals(3);
        overshootSpinBox->setMaximum(1e+06);
        overshootSpinBox->setSingleStep(0.05);
        overshootSpinBox->setValue(1.7);

        gridLayout->addWidget(overshootSpinBox, 3, 3, 1, 2);


        retranslateUi(EasingContextPane);

        QMetaObject::connectSlotsByName(EasingContextPane);
    } // setupUi

    void retranslateUi(QWidget *EasingContextPane)
    {
        EasingContextPane->setWindowTitle(QApplication::translate("EasingContextPane", "Dialog", 0));
#ifndef QT_NO_TOOLTIP
        playButton->setToolTip(QApplication::translate("EasingContextPane", "Play simulation.", 0));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("EasingContextPane", "Easing", 0));
#ifndef QT_NO_TOOLTIP
        easingShapeComboBox->setToolTip(QApplication::translate("EasingContextPane", "Type of easing curve.", 0));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("EasingContextPane", "Subtype", 0));
#ifndef QT_NO_TOOLTIP
        easingExtremesComboBox->setToolTip(QApplication::translate("EasingContextPane", "Acceleration or deceleration of easing curve.", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("EasingContextPane", "Duration", 0));
#ifndef QT_NO_TOOLTIP
        durationSpinBox->setToolTip(QApplication::translate("EasingContextPane", "Duration of animation.", 0));
#endif // QT_NO_TOOLTIP
        durationSpinBox->setSpecialValueText(QApplication::translate("EasingContextPane", "INVALID", 0));
        durationSpinBox->setSuffix(QApplication::translate("EasingContextPane", " ms", 0));
        label->setText(QApplication::translate("EasingContextPane", "Amplitude", 0));
#ifndef QT_NO_TOOLTIP
        amplitudeSpinBox->setToolTip(QApplication::translate("EasingContextPane", "Amplitude of elastic and bounce easing curves.", 0));
#endif // QT_NO_TOOLTIP
        amplitudeSpinBox->setSpecialValueText(QApplication::translate("EasingContextPane", "INVALID", 0));
        label_3->setText(QApplication::translate("EasingContextPane", "Period", 0));
#ifndef QT_NO_TOOLTIP
        periodSpinBox->setToolTip(QApplication::translate("EasingContextPane", "Easing period of an elastic curve.", 0));
#endif // QT_NO_TOOLTIP
        periodSpinBox->setSpecialValueText(QApplication::translate("EasingContextPane", "INVALID", 0));
        label_4->setText(QApplication::translate("EasingContextPane", "Overshoot", 0));
#ifndef QT_NO_TOOLTIP
        overshootSpinBox->setToolTip(QApplication::translate("EasingContextPane", "Easing overshoot for a back curve.", 0));
#endif // QT_NO_TOOLTIP
        overshootSpinBox->setSpecialValueText(QApplication::translate("EasingContextPane", "INVALID", 0));
    } // retranslateUi

};

namespace Ui {
    class EasingContextPane: public Ui_EasingContextPane {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EASINGCONTEXTPANE_H
