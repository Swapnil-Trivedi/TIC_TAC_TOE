#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include "game.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Created By Swapnil Trivedi");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::aboutQt(this,"About");
}

void MainWindow::on_exit_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,"Confirmation","Are You Sure You Want to Quit ?",QMessageBox::Yes |QMessageBox::No );
     if(reply==QMessageBox::Yes)
     {
         QApplication::quit();
     }

}

void MainWindow::on_play_clicked()
{
    game=new Game(this);
    this->close();
    game->show();


}
