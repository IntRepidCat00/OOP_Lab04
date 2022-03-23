#ifndef PLAYGROUND_H
#define PLAYGROUND_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class playground;
}

class playground : public QWidget
{
    Q_OBJECT

public:
    explicit playground(QString plr1Name = "Player1", QString plr2Name = "Player2", QWidget *parent = nullptr);
    ~playground();
    bool winCombination(QString symbol);

private:
    Ui::playground *ui;

    QString player1Name;
    QString player2Name;
    bool turn = true;
    int numTurn = 0;
    bool player1win = false;
    bool player2win = false;
private slots:
    void onButtonClicked();
    void on_ExitButton_clicked();
    void on_playAgainButton_clicked();
};

#endif // PLAYGROUND_H
