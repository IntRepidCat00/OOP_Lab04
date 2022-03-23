#ifndef PLAYGROUND_PNR_H
#define PLAYGROUND_PNR_H

#include <QDialog>

namespace Ui {
class playground_PNR;
}

class playground_PNR : public QDialog
{
    Q_OBJECT

public:
    explicit playground_PNR(QWidget *parent = nullptr);
    explicit playground_PNR(QString pl1Name, QString pl2Name);
    ~playground_PNR();

private slots:
    void on_pushButton_clicked();

private:
    Ui::playground_PNR *ui;

    QString player1Name;
    QString player2Name;

    bool turn;
};

#endif // PLAYGROUND_PNR_H
