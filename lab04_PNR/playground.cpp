#include "playground.h"
#include "ui_playground.h"

playground::playground(QString plr1Name, QString plr2Name, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::playground),
    player1Name(plr1Name),
    player2Name(plr2Name)
{
    ui->setupUi(this);
    connect(ui->pushButton_1_PNR, SIGNAL(released()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_2_PNR, SIGNAL(released()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_3_PNR, SIGNAL(released()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_4_PNR, SIGNAL(released()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_5_PNR, SIGNAL(released()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_6_PNR, SIGNAL(released()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_7_PNR, SIGNAL(released()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_8_PNR, SIGNAL(released()), this, SLOT(onButtonClicked()));
    connect(ui->pushButton_9_PNR, SIGNAL(released()), this, SLOT(onButtonClicked()));
    ui->labelPlayer_PNR->setText(player1Name);
    ui->labelWinner_PNR->hide();
    ui->ExitButton->hide();
    ui->playAgainButton->hide();
}

playground::~playground()
{
    delete ui;
}

bool playground::winCombination(QString symbol)
{
    symbol= symbol + symbol + symbol;
    if(ui->pushButton_1_PNR->text() + ui->pushButton_2_PNR->text() + ui->pushButton_3_PNR->text() == symbol)
    {
        return true;
    } else if(ui->pushButton_4_PNR->text() + ui->pushButton_5_PNR->text() + ui->pushButton_6_PNR->text() == symbol)
    {
        return true;
    } else if(ui->pushButton_7_PNR->text() + ui->pushButton_8_PNR->text() + ui->pushButton_9_PNR->text() == symbol)
    {
        return true;
    } else if(ui->pushButton_1_PNR->text() + ui->pushButton_5_PNR->text() + ui->pushButton_9_PNR->text() == symbol)
    {
        return true;
    } else if(ui->pushButton_3_PNR->text() + ui->pushButton_8_PNR->text() + ui->pushButton_7_PNR->text() == symbol)
    {
        return true;
    } else if(ui->pushButton_1_PNR->text() + ui->pushButton_4_PNR->text() + ui->pushButton_7_PNR->text() == symbol)
    {
        return true;
    } else if(ui->pushButton_2_PNR->text() + ui->pushButton_5_PNR->text() + ui->pushButton_8_PNR->text() == symbol)
    {
        return true;
    } else if(ui->pushButton_3_PNR->text() + ui->pushButton_6_PNR->text() + ui->pushButton_9_PNR->text() == symbol)
    {
        return true;
    } else
    {
        return false;
    }
}

void playground::onButtonClicked()
{
    if(!(player1win || player2win))
    {
        QPushButton *button = (QPushButton*)sender();
        if(button->text().isEmpty())
        {
            button->setChecked(true);
            if(turn)
            {
                button->setText("x");
                turn = false;
                ui->labelPlayer_PNR->setText(player2Name);
                player1win = winCombination("x");
                numTurn++;
            } else
            {
                button->setText("o");
                turn = true;
                ui->labelPlayer_PNR->setText(player1Name);
                player2win = winCombination("o");
                numTurn++;
            }
        }

        if(player1win)
        {
            ui->labelPlayer_PNR->setText("");
            ui->labelWinner_PNR->show();
            ui->labelPlayerWinner_PNR->setText(player1Name);
            ui->playAgainButton->show();
            ui->ExitButton->show();
        } else if(player2win)
        {
            ui->labelPlayer_PNR->setText("");
            ui->labelWinner_PNR->show();
            ui->labelPlayerWinner_PNR->setText(player2Name);
            ui->playAgainButton->show();
            ui->ExitButton->show();
        } if(numTurn == 9)
        {
            ui->labelPlayer_PNR->setText("");
            ui->labelWinner_PNR->show();
            ui->labelPlayerWinner_PNR->setText("Nobody. It's a draw");
            ui->playAgainButton->show();
            ui->ExitButton->show();
        }
    }
}


void playground::on_ExitButton_clicked()
{
    QApplication::quit();
}


void playground::on_playAgainButton_clicked()
{
    ui->pushButton_1_PNR->setText("");
    ui->pushButton_2_PNR->setText("");
    ui->pushButton_3_PNR->setText("");
    ui->pushButton_4_PNR->setText("");
    ui->pushButton_5_PNR->setText("");
    ui->pushButton_6_PNR->setText("");
    ui->pushButton_7_PNR->setText("");
    ui->pushButton_8_PNR->setText("");
    ui->pushButton_9_PNR->setText("");
    ui->labelWinner_PNR->hide();
    ui->labelPlayerWinner_PNR->setText("");
    ui->labelPlayer_PNR->setText(player1Name);
    numTurn = 0;
    player1win = false;
    player2win = false;
    turn = true;
}

