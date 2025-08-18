/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       elliott                                                   */
/*    Created:      8/16/2025, 1:44:31 PM                                     */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here


int main() {

    //created value to alternate x's and o's 
    float f = true;
    //create the grid for game
    Brain.Screen.setPenColor(white);
    Brain.Screen.drawLine( 180+40, 60, 180+40, 180 );
    Brain.Screen.drawLine( 300-40, 60, 300-40, 180 );
    Brain.Screen.drawLine( 180, 60+40, 300, 60+40 );
    Brain.Screen.drawLine( 180, 180-40, 300, 180-40 );
    Brain.Screen.setFillColor(red);
    Brain.Screen.drawRectangle( 460, 220, 480, 240);
    Brain.Screen.setCursor(420, 220);
    Brain.Screen.print("RESET");
    Brain.Screen.setFillColor(transparent);
// Brain screen 480(x) by 240(y) lines are 40 pixels apart.
// red rectangle to be a reset button
if (Brain.Screen.pressing()){
     int x = Brain.Screen.xPosition();
     int y = Brain.Screen.yPosition();  

   if (x >= 460 && x <= (460 + 20) && (y >= 220 && y <= (220 + 20))) {
     Brain.Screen.clearScreen();
     Brain.Screen.setPenColor(white);
     Brain.Screen.drawLine( 180+40, 60, 180+40, 180 );
     Brain.Screen.drawLine( 300-40, 60, 300-40, 180 );
     Brain.Screen.drawLine( 180, 60+40, 300, 60+40 );
     Brain.Screen.drawLine( 180, 180-40, 300, 180-40 );
     Brain.Screen.setFillColor(red);
     Brain.Screen.drawRectangle( 460, 220, 480, 240);
     Brain.Screen.setCursor(420, 220);
     Brain.Screen.print("RESET");
     Brain.Screen.setFillColor(transparent);
     float f = true; 
    };
};





//Print X's when f=true
    while(f = true) {
        if (Brain.Screen.pressing()){
     int x = Brain.Screen.xPosition();
     int y = Brain.Screen.yPosition();  

     //Top Left 
     if (x >= 1 && x <= (1 + 200) && (y >= 1 && y <= (1 + 100))) {
        Brain.Screen.setCursor(200-20, 100-10);
        Brain.Screen.print("X");
        float f = false;
    };
     //Top Middle
     if (x >= 200 && x <= (200 + 40) && (y >= 1 && y <= (1 + 100))) {
        Brain.Screen.setCursor(200, 100-10);
        Brain.Screen.print("X");
        float f = false;
    };
    //Top Right
    if (x >= 240 && x <= (240 + 45) && (y >= 1 && y <= (1 + 100))) {
        Brain.Screen.setCursor(200+20, 100-10);
        Brain.Screen.print("X");
        float f = false;
    };

    //Middle Left 
     if (x >= 1 && x <= (1 + 200) && (y >= 100 && y <= (100 + 40))) {
        Brain.Screen.setCursor(200-20, 140-10);
        Brain.Screen.print("X");
        float f = false;
    };
     //Middle
     if (x >= 200 && x <= (200 + 40) && (y >= 100 && y <= (100 + 40))) {
        Brain.Screen.setCursor(200, 140-10);
        Brain.Screen.print("X");
        float f = false;
    }
    //Middle Right
    if (x >= 240 && x <= (240 + 45) && (y >= 100 && y <= (100 + 40))) {
        Brain.Screen.setCursor(200+20, 140-10);
        Brain.Screen.print("X");
        float f = false;
     };

    //Bottom Left 
     if (x >= 1 && x <= (1 + 200) && (y >= 140 && y <= (140 + 45))) {
        Brain.Screen.setCursor(200-20, 180-10);
        Brain.Screen.print("X");
        float f = false;
    };
     //Bottom Middle
     if (x >= 200 && x <= (200 + 40) && (y >= 140 && y <= (140 + 45))) {
        Brain.Screen.setCursor(200, 180-10);
        Brain.Screen.print("X");
        float f = false;
    };
    //Bottom Right
    if (x >= 240 && x <= (240 + 45) && (y >= 140 && y <= (140 + 45))) {
        Brain.Screen.setCursor(200+20, 180-10);
        Brain.Screen.print("X");
        float f = false;
     };
    };
    };





    //Print O's when f=false
    while(f = false) {
        if (Brain.Screen.pressing()){
     int x = Brain.Screen.xPosition();
     int y = Brain.Screen.yPosition();  

     //Top Left 
     if (x >= 1 && x <= (1 + 200) && (y >= 1 && y <= (1 + 100))) {
        Brain.Screen.setCursor(200-20, 100-10);
        Brain.Screen.print("O");
        float f = true;
    };
     //Top Middle
     if (x >= 200 && x <= (200 + 40) && (y >= 1 && y <= (1 + 100))) {
        Brain.Screen.setCursor(200, 100-10);
        Brain.Screen.print("O");
        float f = true;
    };
    //Top Right
    if (x >= 240 && x <= (240 + 45) && (y >= 1 && y <= (1 + 100))) {
        Brain.Screen.setCursor(200+20, 100-10);
        Brain.Screen.print("O");
        float f = true;
    };

    //Middle Left 
     if (x >= 1 && x <= (1 + 200) && (y >= 100 && y <= (100 + 40))) {
        Brain.Screen.setCursor(200-20, 140-10);
        Brain.Screen.print("O");
        float f = true;
    };
     //Middle
     if (x >= 200 && x <= (200 + 40) && (y >= 100 && y <= (100 + 40))) {
        Brain.Screen.setCursor(200, 140-10);
        Brain.Screen.print("O");
        float f = true;
    }
    //Middle Right
    if (x >= 240 && x <= (240 + 45) && (y >= 100 && y <= (100 + 40))) {
        Brain.Screen.setCursor(200+20, 140-10);
        Brain.Screen.print("O");
        float f = true;
     };

    //Bottom Left 
     if (x >= 1 && x <= (1 + 200) && (y >= 140 && y <= (140 + 45))) {
        Brain.Screen.setCursor(200-20, 180-10);
        Brain.Screen.print("O");
        float f = true;
    };
     //Bottom Middle
     if (x >= 200 && x <= (200 + 40) && (y >= 140 && y <= (140 + 45))) {
        Brain.Screen.setCursor(200, 180-10);
        Brain.Screen.print("O");
        float f = true;
    };
    //Bottom Right
    if (x >= 240 && x <= (240 + 45) && (y >= 140 && y <= (140 + 45))) {
        Brain.Screen.setCursor(200+20, 180-10);
        Brain.Screen.print("O");
        float f = true;
     };
    };
    };
     
        // Allow other tasks to run
        this_thread::sleep_for(10);
    
}
