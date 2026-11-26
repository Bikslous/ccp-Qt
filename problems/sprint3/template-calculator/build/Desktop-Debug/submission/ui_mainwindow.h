/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QComboBox *cmb_controller;
    QPushButton *pushButton_two;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_MR;
    QPushButton *pushButton_six;
    QPushButton *pushButton_positive_negative;
    QPushButton *pushButton_zero;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_eight;
    QPushButton *pushButton_five;
    QPushButton *pushButton_three;
    QPushButton *pushButton_times;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_MS;
    QPushButton *pushButton_equality;
    QPushButton *pushButton_nine;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_MC;
    QPushButton *pushButton_seven;
    QPushButton *pushButton_four;
    QPushButton *pushButton_one;
    QPushButton *tb_extra;
    QPushButton *pushButton_clear;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_memory;
    QLabel *l_result;
    QLabel *l_formula;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(392, 362);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        cmb_controller = new QComboBox(centralwidget);
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->setObjectName("cmb_controller");

        gridLayout->addWidget(cmb_controller, 8, 0, 1, 4);

        pushButton_two = new QPushButton(centralwidget);
        pushButton_two->setObjectName("pushButton_two");

        gridLayout->addWidget(pushButton_two, 6, 1, 1, 1);

        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName("pushButton_pow");

        gridLayout->addWidget(pushButton_pow, 2, 3, 1, 1);

        pushButton_MR = new QPushButton(centralwidget);
        pushButton_MR->setObjectName("pushButton_MR");

        gridLayout->addWidget(pushButton_MR, 2, 1, 1, 1);

        pushButton_six = new QPushButton(centralwidget);
        pushButton_six->setObjectName("pushButton_six");

        gridLayout->addWidget(pushButton_six, 5, 2, 1, 1);

        pushButton_positive_negative = new QPushButton(centralwidget);
        pushButton_positive_negative->setObjectName("pushButton_positive_negative");

        gridLayout->addWidget(pushButton_positive_negative, 3, 2, 1, 1);

        pushButton_zero = new QPushButton(centralwidget);
        pushButton_zero->setObjectName("pushButton_zero");

        gridLayout->addWidget(pushButton_zero, 7, 1, 1, 1);

        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");

        gridLayout->addWidget(pushButton_minus, 5, 3, 1, 1);

        pushButton_eight = new QPushButton(centralwidget);
        pushButton_eight->setObjectName("pushButton_eight");

        gridLayout->addWidget(pushButton_eight, 4, 1, 1, 1);

        pushButton_five = new QPushButton(centralwidget);
        pushButton_five->setObjectName("pushButton_five");

        gridLayout->addWidget(pushButton_five, 5, 1, 1, 1);

        pushButton_three = new QPushButton(centralwidget);
        pushButton_three->setObjectName("pushButton_three");

        gridLayout->addWidget(pushButton_three, 6, 2, 1, 1);

        pushButton_times = new QPushButton(centralwidget);
        pushButton_times->setObjectName("pushButton_times");

        gridLayout->addWidget(pushButton_times, 4, 3, 1, 1);

        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");

        gridLayout->addWidget(pushButton_divide, 3, 3, 1, 1);

        pushButton_MS = new QPushButton(centralwidget);
        pushButton_MS->setObjectName("pushButton_MS");

        gridLayout->addWidget(pushButton_MS, 2, 2, 1, 1);

        pushButton_equality = new QPushButton(centralwidget);
        pushButton_equality->setObjectName("pushButton_equality");

        gridLayout->addWidget(pushButton_equality, 7, 3, 1, 1);

        pushButton_nine = new QPushButton(centralwidget);
        pushButton_nine->setObjectName("pushButton_nine");

        gridLayout->addWidget(pushButton_nine, 4, 2, 1, 1);

        pushButton_delete = new QPushButton(centralwidget);
        pushButton_delete->setObjectName("pushButton_delete");

        gridLayout->addWidget(pushButton_delete, 7, 2, 1, 1);

        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");

        gridLayout->addWidget(pushButton_plus, 6, 3, 1, 1);

        pushButton_MC = new QPushButton(centralwidget);
        pushButton_MC->setObjectName("pushButton_MC");

        gridLayout->addWidget(pushButton_MC, 2, 0, 1, 1);

        pushButton_seven = new QPushButton(centralwidget);
        pushButton_seven->setObjectName("pushButton_seven");

        gridLayout->addWidget(pushButton_seven, 4, 0, 1, 1);

        pushButton_four = new QPushButton(centralwidget);
        pushButton_four->setObjectName("pushButton_four");

        gridLayout->addWidget(pushButton_four, 5, 0, 1, 1);

        pushButton_one = new QPushButton(centralwidget);
        pushButton_one->setObjectName("pushButton_one");

        gridLayout->addWidget(pushButton_one, 6, 0, 1, 1);

        tb_extra = new QPushButton(centralwidget);
        tb_extra->setObjectName("tb_extra");

        gridLayout->addWidget(tb_extra, 7, 0, 1, 1);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");

        gridLayout->addWidget(pushButton_clear, 3, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        l_memory = new QLabel(centralwidget);
        l_memory->setObjectName("l_memory");

        horizontalLayout_2->addWidget(l_memory);

        l_result = new QLabel(centralwidget);
        l_result->setObjectName("l_result");
        l_result->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        l_result->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(l_result);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 4);

        l_formula = new QLabel(centralwidget);
        l_formula->setObjectName("l_formula");
        l_formula->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(l_formula, 0, 0, 1, 4);

        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 2);
        gridLayout->setColumnStretch(3, 2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        cmb_controller->setItemText(0, QCoreApplication::translate("MainWindow", "double", nullptr));
        cmb_controller->setItemText(1, QCoreApplication::translate("MainWindow", "float", nullptr));
        cmb_controller->setItemText(2, QCoreApplication::translate("MainWindow", "uint8_t", nullptr));
        cmb_controller->setItemText(3, QCoreApplication::translate("MainWindow", "int", nullptr));
        cmb_controller->setItemText(4, QCoreApplication::translate("MainWindow", "int64_t", nullptr));
        cmb_controller->setItemText(5, QCoreApplication::translate("MainWindow", "size_t", nullptr));
        cmb_controller->setItemText(6, QCoreApplication::translate("MainWindow", "Rational", nullptr));

        pushButton_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "x\312\270", nullptr));
        pushButton_MR->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        pushButton_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_positive_negative->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        pushButton_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "\342\210\222", nullptr));
        pushButton_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_times->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_MS->setText(QCoreApplication::translate("MainWindow", "MS", nullptr));
        pushButton_equality->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_MC->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        pushButton_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        tb_extra->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        l_memory->setText(QCoreApplication::translate("MainWindow", "l_memory", nullptr));
        l_result->setText(QCoreApplication::translate("MainWindow", "l_result", nullptr));
        l_formula->setText(QCoreApplication::translate("MainWindow", "l_formula", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
