/********************************************************************************
** Form generated from reading UI file 'playground_pnr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYGROUND_PNR_H
#define UI_PLAYGROUND_PNR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_playground_PNR
{
public:
    QPushButton *pushButton_1_PNR;
    QPushButton *pushButton_2_PNR;
    QPushButton *pushButton_3_PNR;
    QPushButton *pushButton_6_PNR;
    QPushButton *pushButton_4_PNR;
    QPushButton *pushButton_5_PNR;
    QPushButton *pushButton_9_PNR;
    QPushButton *pushButton_7_PNR;
    QPushButton *pushButton_8_PNR;
    QLabel *turnLabel_PNR;
    QLabel *playerLabel_PNR;
    QLabel *turnLabel_PNR_2;

    void setupUi(QDialog *playground_PNR)
    {
        if (playground_PNR->objectName().isEmpty())
            playground_PNR->setObjectName(QString::fromUtf8("playground_PNR"));
        playground_PNR->resize(456, 499);
        pushButton_1_PNR = new QPushButton(playground_PNR);
        pushButton_1_PNR->setObjectName(QString::fromUtf8("pushButton_1_PNR"));
        pushButton_1_PNR->setGeometry(QRect(60, 60, 101, 101));
        pushButton_1_PNR->setCheckable(true);
        pushButton_2_PNR = new QPushButton(playground_PNR);
        pushButton_2_PNR->setObjectName(QString::fromUtf8("pushButton_2_PNR"));
        pushButton_2_PNR->setGeometry(QRect(170, 60, 101, 101));
        pushButton_2_PNR->setCheckable(true);
        pushButton_3_PNR = new QPushButton(playground_PNR);
        pushButton_3_PNR->setObjectName(QString::fromUtf8("pushButton_3_PNR"));
        pushButton_3_PNR->setGeometry(QRect(280, 60, 101, 101));
        pushButton_3_PNR->setCheckable(true);
        pushButton_6_PNR = new QPushButton(playground_PNR);
        pushButton_6_PNR->setObjectName(QString::fromUtf8("pushButton_6_PNR"));
        pushButton_6_PNR->setGeometry(QRect(280, 170, 101, 101));
        pushButton_6_PNR->setCheckable(true);
        pushButton_4_PNR = new QPushButton(playground_PNR);
        pushButton_4_PNR->setObjectName(QString::fromUtf8("pushButton_4_PNR"));
        pushButton_4_PNR->setGeometry(QRect(60, 170, 101, 101));
        pushButton_4_PNR->setCheckable(true);
        pushButton_5_PNR = new QPushButton(playground_PNR);
        pushButton_5_PNR->setObjectName(QString::fromUtf8("pushButton_5_PNR"));
        pushButton_5_PNR->setGeometry(QRect(170, 170, 101, 101));
        pushButton_5_PNR->setCheckable(true);
        pushButton_9_PNR = new QPushButton(playground_PNR);
        pushButton_9_PNR->setObjectName(QString::fromUtf8("pushButton_9_PNR"));
        pushButton_9_PNR->setGeometry(QRect(280, 280, 101, 101));
        pushButton_9_PNR->setCheckable(true);
        pushButton_7_PNR = new QPushButton(playground_PNR);
        pushButton_7_PNR->setObjectName(QString::fromUtf8("pushButton_7_PNR"));
        pushButton_7_PNR->setGeometry(QRect(60, 280, 101, 101));
        pushButton_7_PNR->setCheckable(true);
        pushButton_8_PNR = new QPushButton(playground_PNR);
        pushButton_8_PNR->setObjectName(QString::fromUtf8("pushButton_8_PNR"));
        pushButton_8_PNR->setGeometry(QRect(170, 280, 101, 101));
        pushButton_8_PNR->setCheckable(true);
        turnLabel_PNR = new QLabel(playground_PNR);
        turnLabel_PNR->setObjectName(QString::fromUtf8("turnLabel_PNR"));
        turnLabel_PNR->setGeometry(QRect(70, 20, 161, 31));
        playerLabel_PNR = new QLabel(playground_PNR);
        playerLabel_PNR->setObjectName(QString::fromUtf8("playerLabel_PNR"));
        playerLabel_PNR->setGeometry(QRect(170, 20, 161, 31));
        turnLabel_PNR_2 = new QLabel(playground_PNR);
        turnLabel_PNR_2->setObjectName(QString::fromUtf8("turnLabel_PNR_2"));
        turnLabel_PNR_2->setGeometry(QRect(60, 400, 161, 31));

        retranslateUi(playground_PNR);

        QMetaObject::connectSlotsByName(playground_PNR);
    } // setupUi

    void retranslateUi(QDialog *playground_PNR)
    {
        playground_PNR->setWindowTitle(QCoreApplication::translate("playground_PNR", "Tic-Tac-Toe", nullptr));
        pushButton_1_PNR->setText(QString());
        pushButton_2_PNR->setText(QString());
        pushButton_3_PNR->setText(QString());
        pushButton_6_PNR->setText(QString());
        pushButton_4_PNR->setText(QString());
        pushButton_5_PNR->setText(QString());
        pushButton_9_PNR->setText(QString());
        pushButton_7_PNR->setText(QString());
        pushButton_8_PNR->setText(QString());
        turnLabel_PNR->setText(QCoreApplication::translate("playground_PNR", "<html><head/><body><p><span style=\" font-size:12pt;\">It's turn of</span></p></body></html>", nullptr));
        playerLabel_PNR->setText(QCoreApplication::translate("playground_PNR", "<html><head/><body><p><br/></p></body></html>", nullptr));
        turnLabel_PNR_2->setText(QCoreApplication::translate("playground_PNR", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class playground_PNR: public Ui_playground_PNR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYGROUND_PNR_H
