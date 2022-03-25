#include "game_pnr.h"
#include "ui_game_pnr.h"

Game_PNR::Game_PNR(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Game_PNR)
{
    ui->setupUi(this);
    QPixmap bkgnd("D:\\Work\\University\\C1S2\\OOP\\Lab\\Lab4_reworked\\lab04_PNR\\background1.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
}

Game_PNR::~Game_PNR()
{
    delete ui;
}


void Game_PNR::on_startButton_PNR_clicked()
{

    QString player1Name{ui->player1Edit_PNR->toPlainText()}, player2Name{ui->player2Edit_PNR->toPlainText()};

    if(!player1Name.isEmpty() && !player2Name.isEmpty() && player1Name!=player2Name)
    {
        playground *gameWindow = new playground(player1Name, player2Name);
        gameWindow->show();
        hide();
    } else if(player1Name.isEmpty() && player2Name.isEmpty())
    {
        QMessageBox message;
        message.setText("Enter Player 1 and Player 2 names");
        message.exec();
    } else if(player1Name.isEmpty())
    {
        QMessageBox message;
        message.setText("Enter Player 1 name");
        message.exec();
    } else if(player2Name.isEmpty())
    {
        QMessageBox message;
        message.setText("Enter Player 2 name");
        message.exec();
    } else if(player1Name==player2Name)
    {
        QMessageBox message;
        message.setText("Enter different names");
        message.exec();
    }
}

