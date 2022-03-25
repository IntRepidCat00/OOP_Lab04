#include "game_pnr.h"

#include <QApplication>
#include <QSplashScreen>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("D:\\Work\\University\\C1S2\\OOP\\Lab\\Lab4\\lab04_PNR\\splashFancy.png");
    QSplashScreen splash(pixmap);
    splash.show();
    QThread::msleep(500);
    Game_PNR w;
    {
    splash.finish(&w);
    }
    w.show();
    return a.exec();

}
