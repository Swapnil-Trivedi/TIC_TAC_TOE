#include "mainwindow.h"

#include <QApplication>
#include<QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("TIC TAC TOE");
    w.setWindowIcon(QIcon(":/icon_pack/icon/title.png"));
    w.show();
    return a.exec();
}
