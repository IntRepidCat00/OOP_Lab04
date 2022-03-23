#include "playground_pnr.h"
#include "ui_playground_pnr.h"

playground_PNR::playground_PNR(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::playground_PNR)
{
    ui->setupUi(this);
}

playground_PNR::~playground_PNR()
{
    delete ui;
}

playground_PNR::playground_PNR(QString pl1Name, QString pl2Name)
    : ui(new Ui::playground_PNR), player1Name{pl1Name}, player2Name{pl2Name}
{
    ui->setupUi(this);
    ui->playerLabel_PNR->setText("adfsdafsdfasd");
};

void playground_PNR::on_pushButton_clicked()
{
    QPushButton *button = (QPushButton *)sender();
    if(!button->isChecked())
    {
        button->setChecked(true);

        if(turn)
        {
            button->setText("x");
            turn = false;
            ui->playerLabel_PNR->setText(player2Name);
        } else
        {
            button->setText("○");
            turn = true;
            ui->playerLabel_PNR->setText(player1Name);
        }
    }
}


