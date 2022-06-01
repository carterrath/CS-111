#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "library.h"
using namespace std;

int main() {
  Clothes items[100];
  Clothes new_item;//to add an element to the array
  int num_items = 0;//to keep track of the size of the array
  collect_data(items, num_items);//This reads the data from the file
  //summary(items, num_items);
  char user_choice;
  bool stop = false;
  cout<< "\nWelcome to Urban Outfitters!" << endl;
  do
  {
    get_choice(user_choice);//This displays the menu and gets the user's choice
    determine_action(user_choice, stop, items, num_items, new_item);//This takes the user's choice and calls the functions that correspond to the choice
  }while(!stop);
  return 0;
}