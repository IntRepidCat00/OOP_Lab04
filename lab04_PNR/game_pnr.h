#ifndef GAME_PNR_H
#define GAME_PNR_H

#include <QMainWindow>
#include <QMessageBox>
#include "playground.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Game_PNR; }
QT_END_NAMESPACE

class Game_PNR : public QMainWindow
{
    Q_OBJECT

public:
    Game_PNR(QWidget *parent = nullptr);
    ~Game_PNR();

private slots:
    void on_startButton_PNR_clicked();

private:
    Ui::Game_PNR *ui;


};
#endif // GAME_PNR_H
