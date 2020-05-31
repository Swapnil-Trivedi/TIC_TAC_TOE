#include "game.h"
#include "ui_game.h"
#include <QIcon>
#include<QPixmap>
#include<QMessageBox>
#include<mainwindow.h>
#include<QWidget>
#include<QApplication>
int count=0;
int boxcheck[3][3];
//mark X as 5 and O as 10

Game::Game(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
//    QPixmap cross(":/icon_pack/icon/close.png");
//    QPixmap dot(":/icon_pack/icon/dot.png");

}

Game::~Game()
{
    delete ui;
}

void Game::on_pushButton00_clicked()
{

    int h=ui->pushButton00->height();
    int w=ui->pushButton00->width();
    if(boxcheck[0][0]==0){
    if(count==0 && boxcheck[0][0]==0)
    {
    ui->pushButton00->setIcon(QIcon(":/icon_pack/icon/close.png"));
    count=1;
    boxcheck[0][0]=5;
    }
    else if(count==1 && boxcheck[0][0]==0)
    {
        ui->pushButton00->setIcon(QIcon(":/icon_pack/icon/dot.png"));
        count=0;
        boxcheck[0][0]=10;
    }
   }
    else if(boxcheck[0][0]!=0)
    {
       QMessageBox::information(this,"Info","Box Already Occupied!!\nChoose Another Box");
    }
    ui->pushButton00->setIconSize(QSize(w-2,h-2));
    findwinner(boxcheck);
}


void Game::on_pushButton_01_clicked()
{
    int h=ui->pushButton_01->height();
    int w=ui->pushButton_01->width();
    if(boxcheck[0][1]==0){
    if(count==0 && boxcheck[0][1]==0)
    {
    ui->pushButton_01->setIcon(QIcon(":/icon_pack/icon/close.png"));
    count=1;
    boxcheck[0][1]=5;
    }
    else if(count==1 && boxcheck[0][1]==0)
    {
        ui->pushButton_01->setIcon(QIcon(":/icon_pack/icon/dot.png"));
        count=0;
        boxcheck[0][1]=10;
    }
   }
    else if(boxcheck[0][1]!=0)
    {
       QMessageBox::information(this,"Info","Box Already Occupied!!\nChoose Another Box");
    }
    ui->pushButton_01->setIconSize(QSize(w-2,h-2));
    findwinner(boxcheck);
}

void Game::on_pushButton_02_clicked()
{
    int h=ui->pushButton_02->height();
    int w=ui->pushButton_02->width();
    if(boxcheck[0][2]==0){
    if(count==0 && boxcheck[0][2]==0)
    {
    ui->pushButton_02->setIcon(QIcon(":/icon_pack/icon/close.png"));
    count=1;
    boxcheck[0][2]=5;
    }
    else if(count==1 && boxcheck[0][2]==0)
    {
        ui->pushButton_02->setIcon(QIcon(":/icon_pack/icon/dot.png"));
        count=0;
        boxcheck[0][2]=10;
    }
   }
    else if(boxcheck[0][2]!=0)
    {
       QMessageBox::information(this,"Info","Box Already Occupied!!\nChoose Another Box");
    }
    ui->pushButton_02->setIconSize(QSize(w-2,h-2));
    findwinner(boxcheck);

}

void Game::on_pushButton_10_clicked()
{
    int h=ui->pushButton_10->height();
    int w=ui->pushButton_10->width();
    if(boxcheck[1][0]==0){
    if(count==0 && boxcheck[1][0]==0)
    {
    ui->pushButton_10->setIcon(QIcon(":/icon_pack/icon/close.png"));
    count=1;
    boxcheck[1][0]=5;
    }
    else if(count==1 && boxcheck[1][0]==0)
    {
        ui->pushButton_10->setIcon(QIcon(":/icon_pack/icon/dot.png"));
        count=0;
        boxcheck[1][0]=10;
    }
   }
    else if(boxcheck[1][0]!=0)
    {
       QMessageBox::information(this,"Info","Box Already Occupied!!\nChoose Another Box");
    }
    ui->pushButton_10->setIconSize(QSize(w-2,h-2));
    findwinner(boxcheck);
}

void Game::on_pushButton_11_clicked()
{
    int h=ui->pushButton_11->height();
    int w=ui->pushButton_11->width();
    if(boxcheck[1][1]==0){
    if(count==0 && boxcheck[1][1]==0)
    {
    ui->pushButton_11->setIcon(QIcon(":/icon_pack/icon/close.png"));
    count=1;
    boxcheck[1][1]=5;
    }
    else if(count==1 && boxcheck[1][1]==0)
    {
        ui->pushButton_11->setIcon(QIcon(":/icon_pack/icon/dot.png"));
        count=0;
        boxcheck[1][1]=10;
    }
   }
    else if(boxcheck[1][1]!=0)
    {
       QMessageBox::information(this,"Info","Box Already Occupied!!\nChoose Another Box");
    }
    ui->pushButton_11->setIconSize(QSize(w-2,h-2));
    findwinner(boxcheck);
}

void Game::on_pushButton_12_clicked()
{
    int h=ui->pushButton_12->height();
    int w=ui->pushButton_12->width();
    if(boxcheck[1][2]==0){
    if(count==0 && boxcheck[1][2]==0)
    {
    ui->pushButton_12->setIcon(QIcon(":/icon_pack/icon/close.png"));
    count=1;
    boxcheck[1][2]=5;
    }
    else if(count==1 && boxcheck[1][2]==0)
    {
        ui->pushButton_12->setIcon(QIcon(":/icon_pack/icon/dot.png"));
        count=0;
        boxcheck[1][2]=10;
    }
   }
    else if(boxcheck[1][2]!=0)
    {
       QMessageBox::information(this,"Info","Box Already Occupied!!\nChoose Another Box");
    }
    ui->pushButton_12->setIconSize(QSize(w-2,h-2));
    findwinner(boxcheck);
}

void Game::on_pushButton_20_clicked()
{
    int h=ui->pushButton_20->height();
    int w=ui->pushButton_20->width();
    if(boxcheck[2][0]==0){
    if(count==0 && boxcheck[2][0]==0)
    {
    ui->pushButton_20->setIcon(QIcon(":/icon_pack/icon/close.png"));
    count=1;
    boxcheck[2][0]=5;
    }
    else if(count==1 && boxcheck[2][0]==0)
    {
        ui->pushButton_20->setIcon(QIcon(":/icon_pack/icon/dot.png"));
        count=0;
        boxcheck[2][0]=10;
    }
   }
    else if(boxcheck[2][0]!=0)
    {
       QMessageBox::information(this,"Info","Box Already Occupied!!\nChoose Another Box");
    }
    ui->pushButton_20->setIconSize(QSize(w-2,h-2));
    findwinner(boxcheck);
}

void Game::on_pushButton_21_clicked()
{
    int h=ui->pushButton_21->height();
    int w=ui->pushButton_21->width();
    if(boxcheck[2][1]==0){
    if(count==0 && boxcheck[2][1]==0)
    {
    ui->pushButton_21->setIcon(QIcon(":/icon_pack/icon/close.png"));
    count=1;
    boxcheck[2][1]=5;
    }
    else if(count==1 && boxcheck[2][1]==0)
    {
        ui->pushButton_21->setIcon(QIcon(":/icon_pack/icon/dot.png"));
        count=0;
        boxcheck[2][1]=10;
    }
   }
    else if(boxcheck[2][1]!=0)
    {
       QMessageBox::information(this,"Info","Box Already Occupied!!\nChoose Another Box");
    }
    ui->pushButton_21->setIconSize(QSize(w-2,h-2));
    findwinner(boxcheck);
}

void Game::on_pushButton_22_clicked()
{
    int h=ui->pushButton_22->height();
    int w=ui->pushButton_22->width();
    if(boxcheck[2][2]==0){
    if(count==0 && boxcheck[2][2]==0)
    {
    ui->pushButton_22->setIcon(QIcon(":/icon_pack/icon/close.png"));
    count=1;
    boxcheck[2][2]=5;
    }
    else if(count==1 && boxcheck[2][2]==0)
    {
        ui->pushButton_22->setIcon(QIcon(":/icon_pack/icon/dot.png"));
        count=0;
        boxcheck[2][2]=10;
    }
   }
    else if(boxcheck[2][2]!=0)
    {
       QMessageBox::information(this,"Info","Box Already Occupied!!\nChoose Another Box");
    }
    ui->pushButton_22->setIconSize(QSize(w-2,h-2));
    findwinner(boxcheck);
}

void Game::on_Back_clicked()
{
    QWidget *parent= this->parentWidget();
    this->close();
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
            boxcheck[r][c]=0;
    }
    count=0;
    parent->show();

}


void Game::on_restart_clicked()
{
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
            boxcheck[r][c]=0;
    }
    count=0;
    QWidget *parent= this->parentWidget();
    this->close();
    parent->show();


}
