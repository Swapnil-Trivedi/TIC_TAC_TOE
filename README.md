# TIC_TAC_TOE
My take on classical TIC-TAC-TOE game with a Graphical approach using C++ and QT Framework.

## INTRODUCTION
TIC-TAC-TOE is a game everybody have been playing for a very long time. I was always fascinated on making my own applications when I started learning to code.
This is my take on the classical game we all loved using Qt framework and C++

## CONTENTS
I'll try to take you through most of the things explaining the basics of the Game.
- Designing the layout for Menu and Game Screen
- Adding stylesheets to beautify the application
- Implementing Button functionalities
- Game Collision mechanism to detect filled gaps
- Implementing the Winning function to decide the Winner

### Design and Layout
The very first thing we need is a clear picture of what we want to build.
#### MAIN MENU LAYOUT
your main menu for the game can vary, but i decided to keep it simple.
![](/Screenshot/menu_layout.png)
#### well keeping it simple. Here are some key points :
- The Menu is pretty much self explanatory. We have a PLAY BUTTON ,Exit Button and I decided to add an About to make it look filling.
- The Tic-Tac-Toe main image is on a label using Pixmap from the icon pack in Application resources.
- In order to arrange everything is specific layout we use the GRID Layoout to keep everything together.

#### GAME SCREEN LAYOUT
we all are familiar with the Game screen that we need. in order to achieve we add QPushButton in a GRID layout and fix the size from properties.
![](/Screenshot/game_layout.png)
- I have added some button again to make the screen look filling and rich.
- I kept the window size as fixed because I don't want to make the padding change abruptly.
- I have added  Exit, Reset and Main Menu Buttons.
We added our buttons it won't look the same without StyleSheet.

### StyleSheet
Let's Just beautify our buttons. Qt works with StyleSheets which are very very similar to CSS.
Now I am not a Web Devloper or a Designer but we do have online CSS generators which are really helpful and time saving.

![](/Screenshot/Play_button_sheet.png)

Our Online CSS Generator Works beautifully (LOL) but jokes apart it looks stunning.
I did the same with the menu background and changed the Exit button color to red.

### Attaching SIGNALS and SLOTS
Signals and Slots are used inorder to give functionality to our button. It's similar to assigning  a function that's being called everytime we click the button.
- The about button have the most simple implementation of them all.
  I want it to show an about window Which can be done using the QMEssageBox class. This is what the about button   implementation looks like.
```
void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::aboutQt(this,"About");
}

//We can make our custom about but it's Good using the already installed Qt about as it is more visually correct
//Also let's assign a function to Exit Button
// i want my exit to pop up a confirmation window which can be done by the qustion method of QMessageBox class

void MainWindow::on_exit_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,"Confirmation","Are You Sure You Want to Quit ?",QMessageBox::Yes |QMessageBox::No );
   //if user clicks on yes we quit
   if(reply==QMessageBox::Yes)
     {
         QApplication::quit();
     }

}


```
##### We added functions for two of our buttons and here's what the result looks like
![](/Screenshot/about_option.png)
![](/Screenshot/exit_option.png)
But our Play function is yet to be assigned.
what i have in mind is every time we hit play it opens up the GAME LAYOUT file that we made earlier.
- for that we make a Game class object in mainwindow.h and call our object as a widget.
after making the class object aall we need to add to the function is this 
```
void MainWindow::on_play_clicked()
{
    game=new Game(this);
    this->close();
    game->show();
}
//pretty much self explanatory
```
so now every time we hit play button it opens up our Game layout page.
![](/Screenshot/game_screen.png)
we do the same method for the exit  button on our game layout too.
But for our reset and Main Menu Button we add Funtion that's
```
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
// what the function is doing is it's reseting the boxcheck matrix value back to zero which we will use in collision detection for boxes and openeing the main screen as a new widget. now since game screen inherits main screen we call the parent class directly.Also closing the game screen.


```
