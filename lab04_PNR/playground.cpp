#include "playground.h"
#include "ui_playground.h"

playground::playground(QString plr1Name, QString plr2Name, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::playground),
    player1Name(plr1Name),
    player2Name(plr2Name)
{
    ui->setupUi(this);

    QPixmap bkgnd("D:\\Work\\University\\C1S2\\OOP\\Lab\\Lab4_reworked\\lab04_PNR\\background2.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    ui->labelPlayer_PNR->setText(player1Name);
    ui->labelWinner_PNR->hide();
    ui->ExitButton->hide();
    ui->playAgainButton->hide();
    ui->tableWidget_PNR->verticalHeader()->setVisible(false);
    ui->tableWidget_PNR->horizontalHeader()->setVisible(false);
    ui->tableWidget_PNR->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->tableWidget_PNR->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->tableWidget_PNR->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

playground::~playground()
{
    delete ui;
}

bool playground::winCombination(QString symbol)
{
    symbol= symbol + symbol + symbol;
    if(ui->tableWidget_PNR->item(0, 0)->text() + ui->tableWidget_PNR->item(0, 1)->text() +
            ui->tableWidget_PNR->item(0, 2)->text() == symbol)
    {
        return true;
    } else if(ui->tableWidget_PNR->item(1, 0)->text() + ui->tableWidget_PNR->item(1, 1)->text() +
              ui->tableWidget_PNR->item(1, 2)->text() == symbol)
    {
        return true;
    } else if(ui->tableWidget_PNR->item(2, 0)->text() + ui->tableWidget_PNR->item(2, 1)->text() +
              ui->tableWidget_PNR->item(2, 2)->text() == symbol)
    {
        return true;
    } else if(ui->tableWidget_PNR->item(0, 0)->text() + ui->tableWidget_PNR->item(1, 0)->text() +
              ui->tableWidget_PNR->item(2, 0)->text() == symbol)
    {
        return true;
    } else if(ui->tableWidget_PNR->item(0, 1)->text() + ui->tableWidget_PNR->item(1, 1)->text() +
              ui->tableWidget_PNR->item(2, 1)->text() == symbol)
    {
        return true;
    } else if(ui->tableWidget_PNR->item(0, 2)->text() + ui->tableWidget_PNR->item(1, 2)->text() +
              ui->tableWidget_PNR->item(2, 2)->text() == symbol)
    {
        return true;
    } else if(ui->tableWidget_PNR->item(0, 0)->text() + ui->tableWidget_PNR->item(1, 1)->text() +
              ui->tableWidget_PNR->item(2, 2)->text() == symbol)
    {
        return true;
    } else if(ui->tableWidget_PNR->item(0, 2)->text() + ui->tableWidget_PNR->item(1, 1)->text() +
              ui->tableWidget_PNR->item(2, 0)->text() == symbol)
    {
        return true;
    } else

    return false;
}

void playground::on_ExitButton_clicked()
{
    QApplication::quit();
}


void playground::on_playAgainButton_clicked()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            ui->tableWidget_PNR->item(i, j)->setText("");
        }
    }
    ui->labelWinner_PNR->hide();
    ui->labelPlayerWinner_PNR->setText("");
    ui->labelPlayer_PNR->setText(player1Name);
    numTurn = 0;
    player1win = false;
    player2win = false;
    turn = true;
}


void playground::on_tableWidget_PNR_cellClicked(int row, int column)
{
    if(!(player1win || player2win))
    {
        if(ui->tableWidget_PNR->item(row, column)->text().isEmpty())
        {
            if(turn)
            {
                ui->tableWidget_PNR->item(row, column)->setText("x");
                turn = false;
                ui->labelPlayer_PNR->setText(player2Name);
                player1win = winCombination("x");
                numTurn++;
            } else
            {
                ui->tableWidget_PNR->item(row, column)->setText("o");
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

