/********************************************************************************
** Form generated from reading UI file 'playground.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYGROUND_H
#define UI_PLAYGROUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_playground
{
public:
    QPushButton *pushButton_1_PNR;
    QPushButton *pushButton_2_PNR;
    QPushButton *pushButton_3_PNR;
    QPushButton *pushButton_4_PNR;
    QPushButton *pushButton_5_PNR;
    QPushButton *pushButton_6_PNR;
    QPushButton *pushButton_7_PNR;
    QPushButton *pushButton_8_PNR;
    QPushButton *pushButton_9_PNR;
    QLabel *labelTurn_PNR;
    QLabel *labelPlayer_PNR;
    QLabel *labelWinner_PNR;
    QLabel *labelPlayerWinner_PNR;
    QPushButton *playAgainButton;
    QPushButton *ExitButton;

    void setupUi(QWidget *playground)
    {
        if (playground->objectName().isEmpty())
            playground->setObjectName(QString::fromUtf8("playground"));
        playground->resize(446, 509);
        pushButton_1_PNR = new QPushButton(playground);
        pushButton_1_PNR->setObjectName(QString::fromUtf8("pushButton_1_PNR"));
        pushButton_1_PNR->setGeometry(QRect(60, 60, 101, 101));
        pushButton_1_PNR->setCheckable(false);
        pushButton_2_PNR = new QPushButton(playground);
        pushButton_2_PNR->setObjectName(QString::fromUtf8("pushButton_2_PNR"));
        pushButton_2_PNR->setGeometry(QRect(170, 60, 101, 101));
        pushButton_2_PNR->setCheckable(false);
        pushButton_3_PNR = new QPushButton(playground);
        pushButton_3_PNR->setObjectName(QString::fromUtf8("pushButton_3_PNR"));
        pushButton_3_PNR->setGeometry(QRect(280, 60, 101, 101));
        pushButton_3_PNR->setCheckable(false);
        pushButton_4_PNR = new QPushButton(playground);
        pushButton_4_PNR->setObjectName(QString::fromUtf8("pushButton_4_PNR"));
        pushButton_4_PNR->setGeometry(QRect(60, 170, 101, 101));
        pushButton_4_PNR->setCheckable(false);
        pushButton_5_PNR = new QPushButton(playground);
        pushButton_5_PNR->setObjectName(QString::fromUtf8("pushButton_5_PNR"));
        pushButton_5_PNR->setGeometry(QRect(170, 170, 101, 101));
        pushButton_5_PNR->setCheckable(false);
        pushButton_6_PNR = new QPushButton(playground);
        pushButton_6_PNR->setObjectName(QString::fromUtf8("pushButton_6_PNR"));
        pushButton_6_PNR->setGeometry(QRect(280, 170, 101, 101));
        pushButton_6_PNR->setCheckable(false);
        pushButton_7_PNR = new QPushButton(playground);
        pushButton_7_PNR->setObjectName(QString::fromUtf8("pushButton_7_PNR"));
        pushButton_7_PNR->setGeometry(QRect(60, 280, 101, 101));
        pushButton_7_PNR->setCheckable(false);
        pushButton_8_PNR = new QPushButton(playground);
        pushButton_8_PNR->setObjectName(QString::fromUtf8("pushButton_8_PNR"));
        pushButton_8_PNR->setGeometry(QRect(170, 280, 101, 101));
        pushButton_8_PNR->setCheckable(false);
        pushButton_9_PNR = new QPushButton(playground);
        pushButton_9_PNR->setObjectName(QString::fromUtf8("pushButton_9_PNR"));
        pushButton_9_PNR->setGeometry(QRect(280, 280, 101, 101));
        pushButton_9_PNR->setCheckable(false);
        labelTurn_PNR = new QLabel(playground);
        labelTurn_PNR->setObjectName(QString::fromUtf8("labelTurn_PNR"));
        labelTurn_PNR->setGeometry(QRect(70, 20, 91, 20));
        QFont font;
        font.setPointSize(11);
        labelTurn_PNR->setFont(font);
        labelPlayer_PNR = new QLabel(playground);
        labelPlayer_PNR->setObjectName(QString::fromUtf8("labelPlayer_PNR"));
        labelPlayer_PNR->setGeometry(QRect(142, 20, 63, 20));
        labelPlayer_PNR->setFont(font);
        labelWinner_PNR = new QLabel(playground);
        labelWinner_PNR->setObjectName(QString::fromUtf8("labelWinner_PNR"));
        labelWinner_PNR->setEnabled(true);
        labelWinner_PNR->setGeometry(QRect(70, 400, 71, 20));
        labelWinner_PNR->setFont(font);
        labelPlayerWinner_PNR = new QLabel(playground);
        labelPlayerWinner_PNR->setObjectName(QString::fromUtf8("labelPlayerWinner_PNR"));
        labelPlayerWinner_PNR->setGeometry(QRect(124, 400, 251, 20));
        labelPlayerWinner_PNR->setFont(font);
        playAgainButton = new QPushButton(playground);
        playAgainButton->setObjectName(QString::fromUtf8("playAgainButton"));
        playAgainButton->setGeometry(QRect(60, 440, 151, 51));
        ExitButton = new QPushButton(playground);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(230, 440, 151, 51));

        retranslateUi(playground);

        QMetaObject::connectSlotsByName(playground);
    } // setupUi

    void retranslateUi(QWidget *playground)
    {
        playground->setWindowTitle(QCoreApplication::translate("playground", "Form", nullptr));
        pushButton_1_PNR->setText(QString());
        pushButton_2_PNR->setText(QString());
        pushButton_3_PNR->setText(QString());
        pushButton_4_PNR->setText(QString());
        pushButton_5_PNR->setText(QString());
        pushButton_6_PNR->setText(QString());
        pushButton_7_PNR->setText(QString());
        pushButton_8_PNR->setText(QString());
        pushButton_9_PNR->setText(QString());
        labelTurn_PNR->setText(QCoreApplication::translate("playground", "It's turn of", nullptr));
        labelPlayer_PNR->setText(QString());
        labelWinner_PNR->setText(QCoreApplication::translate("playground", "Winner:", nullptr));
        labelPlayerWinner_PNR->setText(QString());
        playAgainButton->setText(QCoreApplication::translate("playground", "Play again", nullptr));
        ExitButton->setText(QCoreApplication::translate("playground", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class playground: public Ui_playground {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYGROUND_H
