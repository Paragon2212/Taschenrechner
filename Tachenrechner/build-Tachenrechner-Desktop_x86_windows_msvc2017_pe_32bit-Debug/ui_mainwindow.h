/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QPushButton *CMD6;
    QPushButton *CMD1;
    QPushButton *CMD7;
    QPushButton *CMD8;
    QPushButton *CMD3;
    QPushButton *CMD4;
    QPushButton *CMD5;
    QPushButton *CMD2;
    QPushButton *CMD9;
    QPushButton *CMDminus;
    QPushButton *CMDplus;
    QPushButton *CMDgeteilt;
    QPushButton *CMD0;
    QPushButton *CMDkomma;
    QPushButton *CMDback;
    QPushButton *CMDmal;
    QPushButton *CMDistgleich;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(338, 438);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        CMD6 = new QPushButton(centralwidget);
        CMD6->setObjectName(QString::fromUtf8("CMD6"));

        gridLayout->addWidget(CMD6, 5, 2, 1, 1);

        CMD1 = new QPushButton(centralwidget);
        CMD1->setObjectName(QString::fromUtf8("CMD1"));

        gridLayout->addWidget(CMD1, 6, 0, 1, 1);

        CMD7 = new QPushButton(centralwidget);
        CMD7->setObjectName(QString::fromUtf8("CMD7"));

        gridLayout->addWidget(CMD7, 3, 0, 1, 1);

        CMD8 = new QPushButton(centralwidget);
        CMD8->setObjectName(QString::fromUtf8("CMD8"));

        gridLayout->addWidget(CMD8, 3, 1, 1, 1);

        CMD3 = new QPushButton(centralwidget);
        CMD3->setObjectName(QString::fromUtf8("CMD3"));

        gridLayout->addWidget(CMD3, 6, 2, 1, 1);

        CMD4 = new QPushButton(centralwidget);
        CMD4->setObjectName(QString::fromUtf8("CMD4"));

        gridLayout->addWidget(CMD4, 5, 0, 1, 1);

        CMD5 = new QPushButton(centralwidget);
        CMD5->setObjectName(QString::fromUtf8("CMD5"));

        gridLayout->addWidget(CMD5, 5, 1, 1, 1);

        CMD2 = new QPushButton(centralwidget);
        CMD2->setObjectName(QString::fromUtf8("CMD2"));

        gridLayout->addWidget(CMD2, 6, 1, 1, 1);

        CMD9 = new QPushButton(centralwidget);
        CMD9->setObjectName(QString::fromUtf8("CMD9"));

        gridLayout->addWidget(CMD9, 3, 2, 1, 1);

        CMDminus = new QPushButton(centralwidget);
        CMDminus->setObjectName(QString::fromUtf8("CMDminus"));

        gridLayout->addWidget(CMDminus, 5, 3, 1, 1);

        CMDplus = new QPushButton(centralwidget);
        CMDplus->setObjectName(QString::fromUtf8("CMDplus"));

        gridLayout->addWidget(CMDplus, 3, 3, 1, 1);

        CMDgeteilt = new QPushButton(centralwidget);
        CMDgeteilt->setObjectName(QString::fromUtf8("CMDgeteilt"));

        gridLayout->addWidget(CMDgeteilt, 6, 3, 1, 1);

        CMD0 = new QPushButton(centralwidget);
        CMD0->setObjectName(QString::fromUtf8("CMD0"));

        gridLayout->addWidget(CMD0, 9, 0, 1, 1);

        CMDkomma = new QPushButton(centralwidget);
        CMDkomma->setObjectName(QString::fromUtf8("CMDkomma"));

        gridLayout->addWidget(CMDkomma, 9, 1, 1, 1);

        CMDback = new QPushButton(centralwidget);
        CMDback->setObjectName(QString::fromUtf8("CMDback"));

        gridLayout->addWidget(CMDback, 0, 2, 1, 1);

        CMDmal = new QPushButton(centralwidget);
        CMDmal->setObjectName(QString::fromUtf8("CMDmal"));

        gridLayout->addWidget(CMDmal, 0, 3, 1, 1);

        CMDistgleich = new QPushButton(centralwidget);
        CMDistgleich->setObjectName(QString::fromUtf8("CMDistgleich"));

        gridLayout->addWidget(CMDistgleich, 9, 2, 1, 2);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 50));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        CMD6->setText(QApplication::translate("MainWindow", "6", nullptr));
        CMD1->setText(QApplication::translate("MainWindow", "1", nullptr));
        CMD7->setText(QApplication::translate("MainWindow", "7", nullptr));
        CMD8->setText(QApplication::translate("MainWindow", "8", nullptr));
        CMD3->setText(QApplication::translate("MainWindow", "3", nullptr));
        CMD4->setText(QApplication::translate("MainWindow", "4", nullptr));
        CMD5->setText(QApplication::translate("MainWindow", "5", nullptr));
        CMD2->setText(QApplication::translate("MainWindow", "2", nullptr));
        CMD9->setText(QApplication::translate("MainWindow", "9", nullptr));
        CMDminus->setText(QApplication::translate("MainWindow", "-", nullptr));
        CMDplus->setText(QApplication::translate("MainWindow", "+", nullptr));
        CMDgeteilt->setText(QApplication::translate("MainWindow", "/", nullptr));
        CMD0->setText(QApplication::translate("MainWindow", "0", nullptr));
        CMDkomma->setText(QApplication::translate("MainWindow", ",", nullptr));
        CMDback->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        CMDmal->setText(QApplication::translate("MainWindow", "*", nullptr));
        CMDistgleich->setText(QApplication::translate("MainWindow", "=", nullptr));
        groupBox->setTitle(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
