#ifndef PLAYGROUND_H
#define PLAYGROUND_H

#include <QWidget>
#include <QPushButton>
#include <QMediaPlayer>
#include <QAudioOutput>

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
    bool soundMute = false;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
    QString music[4];
    int currentSong = 0;
private slots:
    void on_ExitButton_clicked();
    void on_playAgainButton_clicked();
    void on_tableWidget_PNR_cellClicked(int row, int column);
    void on_mute_clicked();
    void on_soundSlider_PNR_valueChanged(int value);
    void on_nextSong_PNR_clicked();
    void on_previousSong_PNR_clicked();
};

#endif // PLAYGROUND_H
