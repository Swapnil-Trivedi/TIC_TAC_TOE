#ifndef GAME_H
#define GAME_H

#include <QMainWindow>
#include<QMessageBox>
#include<QApplication>
namespace Ui {
class Game;
}

class Game : public QMainWindow
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();

private slots:
    void on_pushButton00_clicked();

    void on_pushButton_01_clicked();

    void on_pushButton_02_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_22_clicked();

    void on_Back_clicked();


    void on_restart_clicked();

private:
    Ui::Game *ui;

    void findwinner(int boxcheck[3][3])
    {
        int r,c;
        int xcount=0,ocount=0;
        for(r=0;r<3;r++)
        {
            for(c=0;c<3;c++)
              {
                if(boxcheck[r][c]==5)
                {xcount++;}
                else if(boxcheck[r][c]==10)
                {ocount++;}
               }
            if(xcount==3)
               {
                QMessageBox::information(this,"Message","Congratulations Player X Won!!");
                break;
               }
            else if(ocount==3)
               {
                QMessageBox::information(this,"Message","Congratulations Player O Won!!");
                break;
                }
             else{
                xcount=ocount=0;
                }
        }

//Column Win Condition
        ocount=0;
        xcount=0;
        for(c=0;c<3;c++)
        {
            for(r=0;r<3;r++)
              {
                if(boxcheck[r][c]==5)
                  xcount++;
                else if(boxcheck[r][c]==10)
                  ocount++;
               }
            if(xcount==3)
               {
                QMessageBox::information(this,"Message","Congratulations Player X Won!!");
                break;
               }
            else if(ocount==3)
               {
                QMessageBox::information(this,"Message","Congratulations Player O Won!!");
                break;
               }
             else{
                xcount=ocount=0;
                }
         }

//Diagonal Win condition small diagonal
   ocount=xcount=0;
   for(r=0;r<3;r++)
   {
       for(c=0;c<3;c++)
       {
           if(r==c)
           {
               if(boxcheck[r][c]==5)
                 xcount++;
               else if(boxcheck[r][c]==10)
                 ocount++;
           }

        }
    }
   if(xcount==3)
      {
       QMessageBox::information(this,"Message","Congratulations Player X Won!!");
      }
   else if(ocount==3)
      {
       QMessageBox::information(this,"Message","Congratulations Player O Won!!");
      }
    else{
       xcount=ocount=0;
       }

//bigger diagonal Win
xcount=ocount=0;
 for(r=0;r<3;r++)
 {
     for(c=0;c<3;c++)
     {
         if((r+c)==2)
         {
             if(boxcheck[r][c]==5)
               xcount++;
             else if(boxcheck[r][c]==10)
               ocount++;
         }
     }
 }
 if(xcount==3)
    {
     QMessageBox::information(this,"Message","Congratulations Player X Won!!");
    }
 else if(ocount==3)
    {
     QMessageBox::information(this,"Message","Congratulations Player O Won!!");
    }
  else{
     xcount=ocount=0;

     }



    //function paranthesis
    }


};

#endif // GAME_H
