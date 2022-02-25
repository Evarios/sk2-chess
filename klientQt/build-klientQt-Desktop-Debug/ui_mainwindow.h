/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *wyslijButton;
    QLabel *serverMessage;
    QComboBox *figury;
    QComboBox *pola;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(638, 473);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        wyslijButton = new QPushButton(centralwidget);
        wyslijButton->setObjectName(QString::fromUtf8("wyslijButton"));
        wyslijButton->setGeometry(QRect(500, 370, 101, 23));
        serverMessage = new QLabel(centralwidget);
        serverMessage->setObjectName(QString::fromUtf8("serverMessage"));
        serverMessage->setGeometry(QRect(270, 40, 301, 81));
        figury = new QComboBox(centralwidget);
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->addItem(QString());
        figury->setObjectName(QString::fromUtf8("figury"));
        figury->setGeometry(QRect(500, 270, 79, 23));
        pola = new QComboBox(centralwidget);
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->addItem(QString());
        pola->setObjectName(QString::fromUtf8("pola"));
        pola->setGeometry(QRect(500, 330, 79, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 234, 101, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(500, 300, 91, 21));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        wyslijButton->setText(QApplication::translate("MainWindow", "Wykonaj ruch", nullptr));
        serverMessage->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        figury->setItemText(0, QApplication::translate("MainWindow", "wR1", nullptr));
        figury->setItemText(1, QApplication::translate("MainWindow", "wN1", nullptr));
        figury->setItemText(2, QApplication::translate("MainWindow", "wB1", nullptr));
        figury->setItemText(3, QApplication::translate("MainWindow", "wKI", nullptr));
        figury->setItemText(4, QApplication::translate("MainWindow", "wQU", nullptr));
        figury->setItemText(5, QApplication::translate("MainWindow", "wB2", nullptr));
        figury->setItemText(6, QApplication::translate("MainWindow", "wN2", nullptr));
        figury->setItemText(7, QApplication::translate("MainWindow", "wR2", nullptr));
        figury->setItemText(8, QApplication::translate("MainWindow", "wp1", nullptr));
        figury->setItemText(9, QApplication::translate("MainWindow", "wp2", nullptr));
        figury->setItemText(10, QApplication::translate("MainWindow", "wp3", nullptr));
        figury->setItemText(11, QApplication::translate("MainWindow", "wp4", nullptr));
        figury->setItemText(12, QApplication::translate("MainWindow", "wp5", nullptr));
        figury->setItemText(13, QApplication::translate("MainWindow", "wp6", nullptr));
        figury->setItemText(14, QApplication::translate("MainWindow", "wp7", nullptr));
        figury->setItemText(15, QApplication::translate("MainWindow", "wp8", nullptr));
        figury->setItemText(16, QApplication::translate("MainWindow", "bp1", nullptr));
        figury->setItemText(17, QApplication::translate("MainWindow", "bp2", nullptr));
        figury->setItemText(18, QApplication::translate("MainWindow", "bp3", nullptr));
        figury->setItemText(19, QApplication::translate("MainWindow", "bp4", nullptr));
        figury->setItemText(20, QApplication::translate("MainWindow", "bp5", nullptr));
        figury->setItemText(21, QApplication::translate("MainWindow", "bp6", nullptr));
        figury->setItemText(22, QApplication::translate("MainWindow", "bp7", nullptr));
        figury->setItemText(23, QApplication::translate("MainWindow", "bp8", nullptr));
        figury->setItemText(24, QApplication::translate("MainWindow", "bR1", nullptr));
        figury->setItemText(25, QApplication::translate("MainWindow", "bN1", nullptr));
        figury->setItemText(26, QApplication::translate("MainWindow", "bB1", nullptr));
        figury->setItemText(27, QApplication::translate("MainWindow", "bKI", nullptr));
        figury->setItemText(28, QApplication::translate("MainWindow", "bQU", nullptr));
        figury->setItemText(29, QApplication::translate("MainWindow", "bB2", nullptr));
        figury->setItemText(30, QApplication::translate("MainWindow", "bN2", nullptr));
        figury->setItemText(31, QApplication::translate("MainWindow", "bR2", nullptr));

        pola->setItemText(0, QApplication::translate("MainWindow", "01", nullptr));
        pola->setItemText(1, QApplication::translate("MainWindow", "02", nullptr));
        pola->setItemText(2, QApplication::translate("MainWindow", "03", nullptr));
        pola->setItemText(3, QApplication::translate("MainWindow", "04", nullptr));
        pola->setItemText(4, QApplication::translate("MainWindow", "05", nullptr));
        pola->setItemText(5, QApplication::translate("MainWindow", "06", nullptr));
        pola->setItemText(6, QApplication::translate("MainWindow", "07", nullptr));
        pola->setItemText(7, QApplication::translate("MainWindow", "08", nullptr));
        pola->setItemText(8, QApplication::translate("MainWindow", "09", nullptr));
        pola->setItemText(9, QApplication::translate("MainWindow", "10", nullptr));
        pola->setItemText(10, QApplication::translate("MainWindow", "11", nullptr));
        pola->setItemText(11, QApplication::translate("MainWindow", "12", nullptr));
        pola->setItemText(12, QApplication::translate("MainWindow", "13", nullptr));
        pola->setItemText(13, QApplication::translate("MainWindow", "14", nullptr));
        pola->setItemText(14, QApplication::translate("MainWindow", "15", nullptr));
        pola->setItemText(15, QApplication::translate("MainWindow", "16", nullptr));
        pola->setItemText(16, QApplication::translate("MainWindow", "17", nullptr));
        pola->setItemText(17, QApplication::translate("MainWindow", "18", nullptr));
        pola->setItemText(18, QApplication::translate("MainWindow", "19", nullptr));
        pola->setItemText(19, QApplication::translate("MainWindow", "20", nullptr));
        pola->setItemText(20, QApplication::translate("MainWindow", "21", nullptr));
        pola->setItemText(21, QApplication::translate("MainWindow", "22", nullptr));
        pola->setItemText(22, QApplication::translate("MainWindow", "23", nullptr));
        pola->setItemText(23, QApplication::translate("MainWindow", "24", nullptr));
        pola->setItemText(24, QApplication::translate("MainWindow", "25", nullptr));
        pola->setItemText(25, QApplication::translate("MainWindow", "26", nullptr));
        pola->setItemText(26, QApplication::translate("MainWindow", "27", nullptr));
        pola->setItemText(27, QApplication::translate("MainWindow", "28", nullptr));
        pola->setItemText(28, QApplication::translate("MainWindow", "29", nullptr));
        pola->setItemText(29, QApplication::translate("MainWindow", "30", nullptr));
        pola->setItemText(30, QApplication::translate("MainWindow", "31", nullptr));
        pola->setItemText(31, QApplication::translate("MainWindow", "32", nullptr));
        pola->setItemText(32, QApplication::translate("MainWindow", "33", nullptr));
        pola->setItemText(33, QApplication::translate("MainWindow", "34", nullptr));
        pola->setItemText(34, QApplication::translate("MainWindow", "35", nullptr));
        pola->setItemText(35, QApplication::translate("MainWindow", "36", nullptr));
        pola->setItemText(36, QApplication::translate("MainWindow", "37", nullptr));
        pola->setItemText(37, QApplication::translate("MainWindow", "38", nullptr));
        pola->setItemText(38, QApplication::translate("MainWindow", "39", nullptr));
        pola->setItemText(39, QApplication::translate("MainWindow", "40", nullptr));
        pola->setItemText(40, QApplication::translate("MainWindow", "41", nullptr));
        pola->setItemText(41, QApplication::translate("MainWindow", "42", nullptr));
        pola->setItemText(42, QApplication::translate("MainWindow", "43", nullptr));
        pola->setItemText(43, QApplication::translate("MainWindow", "44", nullptr));
        pola->setItemText(44, QApplication::translate("MainWindow", "45", nullptr));
        pola->setItemText(45, QApplication::translate("MainWindow", "46", nullptr));
        pola->setItemText(46, QApplication::translate("MainWindow", "47", nullptr));
        pola->setItemText(47, QApplication::translate("MainWindow", "48", nullptr));
        pola->setItemText(48, QApplication::translate("MainWindow", "49", nullptr));
        pola->setItemText(49, QApplication::translate("MainWindow", "50", nullptr));
        pola->setItemText(50, QApplication::translate("MainWindow", "51", nullptr));
        pola->setItemText(51, QApplication::translate("MainWindow", "52", nullptr));
        pola->setItemText(52, QApplication::translate("MainWindow", "53", nullptr));
        pola->setItemText(53, QApplication::translate("MainWindow", "54", nullptr));
        pola->setItemText(54, QApplication::translate("MainWindow", "55", nullptr));
        pola->setItemText(55, QApplication::translate("MainWindow", "56", nullptr));
        pola->setItemText(56, QApplication::translate("MainWindow", "57", nullptr));
        pola->setItemText(57, QApplication::translate("MainWindow", "58", nullptr));
        pola->setItemText(58, QApplication::translate("MainWindow", "59", nullptr));
        pola->setItemText(59, QApplication::translate("MainWindow", "60", nullptr));
        pola->setItemText(60, QApplication::translate("MainWindow", "61", nullptr));
        pola->setItemText(61, QApplication::translate("MainWindow", "62", nullptr));
        pola->setItemText(62, QApplication::translate("MainWindow", "63", nullptr));
        pola->setItemText(63, QApplication::translate("MainWindow", "64", nullptr));

        label->setText(QApplication::translate("MainWindow", "Wybierz figur\304\231", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Wybierz pole", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
