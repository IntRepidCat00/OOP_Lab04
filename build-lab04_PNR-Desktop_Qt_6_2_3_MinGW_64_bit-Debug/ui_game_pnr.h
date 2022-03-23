/********************************************************************************
** Form generated from reading UI file 'game_pnr.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_PNR_H
#define UI_GAME_PNR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game_PNR
{
public:
    QWidget *centralwidget;
    QTextEdit *player1Edit_PNR;
    QTextEdit *player2Edit_PNR;
    QLabel *player1Label_PNR;
    QLabel *player2Labe_PNR;
    QPushButton *startButton_PNR;
    QLabel *mainLabel_PNR;

    void setupUi(QMainWindow *Game_PNR)
    {
        if (Game_PNR->objectName().isEmpty())
            Game_PNR->setObjectName(QString::fromUtf8("Game_PNR"));
        Game_PNR->resize(530, 210);
        Game_PNR->setMinimumSize(QSize(530, 210));
        Game_PNR->setMaximumSize(QSize(530, 210));
        centralwidget = new QWidget(Game_PNR);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        player1Edit_PNR = new QTextEdit(centralwidget);
        player1Edit_PNR->setObjectName(QString::fromUtf8("player1Edit_PNR"));
        player1Edit_PNR->setGeometry(QRect(140, 60, 371, 31));
        player2Edit_PNR = new QTextEdit(centralwidget);
        player2Edit_PNR->setObjectName(QString::fromUtf8("player2Edit_PNR"));
        player2Edit_PNR->setGeometry(QRect(140, 100, 371, 31));
        player1Label_PNR = new QLabel(centralwidget);
        player1Label_PNR->setObjectName(QString::fromUtf8("player1Label_PNR"));
        player1Label_PNR->setGeometry(QRect(20, 70, 111, 20));
        player2Labe_PNR = new QLabel(centralwidget);
        player2Labe_PNR->setObjectName(QString::fromUtf8("player2Labe_PNR"));
        player2Labe_PNR->setGeometry(QRect(20, 110, 111, 20));
        startButton_PNR = new QPushButton(centralwidget);
        startButton_PNR->setObjectName(QString::fromUtf8("startButton_PNR"));
        startButton_PNR->setGeometry(QRect(180, 150, 161, 41));
        mainLabel_PNR = new QLabel(centralwidget);
        mainLabel_PNR->setObjectName(QString::fromUtf8("mainLabel_PNR"));
        mainLabel_PNR->setGeometry(QRect(180, 10, 211, 41));
        QFont font;
        font.setPointSize(20);
        mainLabel_PNR->setFont(font);
        Game_PNR->setCentralWidget(centralwidget);

        retranslateUi(Game_PNR);

        QMetaObject::connectSlotsByName(Game_PNR);
    } // setupUi

    void retranslateUi(QMainWindow *Game_PNR)
    {
        Game_PNR->setWindowTitle(QCoreApplication::translate("Game_PNR", "Tic-Tac-Toe", nullptr));
        player1Label_PNR->setText(QCoreApplication::translate("Game_PNR", "Player 1 name:", nullptr));
        player2Labe_PNR->setText(QCoreApplication::translate("Game_PNR", "Player 2 name:", nullptr));
        startButton_PNR->setText(QCoreApplication::translate("Game_PNR", "Start Game", nullptr));
        mainLabel_PNR->setText(QCoreApplication::translate("Game_PNR", "Tic-Tac-Toe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game_PNR: public Ui_Game_PNR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_PNR_H
