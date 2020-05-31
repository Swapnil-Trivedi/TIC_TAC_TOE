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
- The Menu is pretty much self explanatory. We have a PLAY BUTTON a Exit Button and i decided to add About to make it look filling.
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
Now I am not a Web Devloper or a Designer but we do have online CSS generators which are really helpfull and time saving.



