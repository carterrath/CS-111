#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "library.h"
using namespace std;

int main() {
  Game one_game;
  char win_tie_loss;
  ifstream file;
  file.open("schedule.csv");
  if (!file.is_open()) 
  {
    cout << "Can't open the schedule.csv file.\n";
    return 1;
  }
 cout << "OPPONENT" << setw(29) << "RESULT" << endl;
  int counter = 0;
  while (counter < 14) 
  {
    collect_game(one_game, file);
    if(one_game.goals_scored > one_game.goals_lost) 
    {
      win_tie_loss = 'W';
    }
    else if (one_game.goals_scored == one_game.goals_lost)
    {
      win_tie_loss = 'T';
    }
    else
    {
      win_tie_loss = 'L';
    }

    cout << left<< setw(22)<< one_game.opponent << right << setw(10) << win_tie_loss << "," << setw(2) << one_game.goals_scored << "-" << one_game.goals_lost << endl;
    counter++;
  }
 
  file.close();
 
}




/*In this assignment, you are asked to modify the provided program in three ways:

Move the struct definition for Game from main.cpp to library.h and add #include "library.h" in main.cpp. Run the program after this change to make sure the program is still working.
Create a function collect_game to collect data of one game from an ifstream object. The function prototype of collect_game must be saved in library.h and the function implementation of collect_game must be saved in library.cpp. In the main function, replace the existing input statements by a call to collect_game to collect data for one game. run the program after this change to make sure the program is still working.
Update the output statements in the program using parametric manipulator(s) and conditional statement(s) so that they will generate a nicely organized result as illustrated by the following image. You are not allowed to use tabs or multiple spaces to set up the format.*/