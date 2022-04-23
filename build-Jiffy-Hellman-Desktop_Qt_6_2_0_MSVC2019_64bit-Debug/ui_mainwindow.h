/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *genA;
    QPushButton *genB;
    QLineEdit *generation_A;
    QLineEdit *generation_B;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *World_g;
    QLineEdit *World_p;
    QPushButton *setWorld;
    QLineEdit *B_K;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *A_K;
    QLabel *label_8;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(593, 270);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        genA = new QPushButton(centralwidget);
        genA->setObjectName(QString::fromUtf8("genA"));
        genA->setGeometry(QRect(20, 190, 181, 31));
        genB = new QPushButton(centralwidget);
        genB->setObjectName(QString::fromUtf8("genB"));
        genB->setGeometry(QRect(390, 190, 181, 31));
        generation_A = new QLineEdit(centralwidget);
        generation_A->setObjectName(QString::fromUtf8("generation_A"));
        generation_A->setGeometry(QRect(20, 150, 181, 31));
        generation_B = new QLineEdit(centralwidget);
        generation_B->setObjectName(QString::fromUtf8("generation_B"));
        generation_B->setGeometry(QRect(390, 150, 181, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 121, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(440, 10, 121, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 10, 47, 13));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 60, 47, 13));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(240, 90, 47, 13));
        World_g = new QLineEdit(centralwidget);
        World_g->setObjectName(QString::fromUtf8("World_g"));
        World_g->setGeometry(QRect(260, 60, 111, 21));
        World_p = new QLineEdit(centralwidget);
        World_p->setObjectName(QString::fromUtf8("World_p"));
        World_p->setGeometry(QRect(260, 90, 111, 21));
        setWorld = new QPushButton(centralwidget);
        setWorld->setObjectName(QString::fromUtf8("setWorld"));
        setWorld->setGeometry(QRect(210, 150, 171, 31));
        B_K = new QLineEdit(centralwidget);
        B_K->setObjectName(QString::fromUtf8("B_K"));
        B_K->setGeometry(QRect(430, 90, 111, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(390, 130, 47, 13));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(410, 90, 47, 13));
        A_K = new QLineEdit(centralwidget);
        A_K->setObjectName(QString::fromUtf8("A_K"));
        A_K->setGeometry(QRect(70, 90, 111, 21));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 130, 47, 13));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 90, 47, 13));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 593, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        genA->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\207\320\270\321\201\320\273\320\276", nullptr));
        genB->setText(QCoreApplication::translate("MainWindow", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\207\320\270\321\201\320\273\320\276", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\261\320\265\321\201\320\265\320\264\320\275\320\270\320\272 \320\220", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\261\320\265\321\201\320\265\320\264\320\275\320\270\320\272 \320\221", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\265\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "g", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "p", nullptr));
        setWorld->setText(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\276\320\261\321\211\320\270\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\220", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "K", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
