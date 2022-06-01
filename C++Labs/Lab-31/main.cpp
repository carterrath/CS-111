#include <iostream>
#include "library.h"
using namespace std;

int main() {
  int integers[10] = {1,3,5};
  int size = 3;
  //int new_integer1, new_integer2, new_integer3;
  //cout<< "Enter a new integer: ";
  //cin >> new_integer1;
  //cout << size << endl;
  print_array(integers, size);
  insert_data(integers, size , 2);
  print_array(integers, size);
  //cout<< "Enter a new integer: ";
  //cin >> new_integer2;
  //cout << size << endl;
  insert_data(integers, size , 4);
  print_array(integers, size);
  //cout<< "Enter a new integer: ";
  //cin >> new_integer2;
  //cout << size << endl;
  insert_data(integers, size , 6);
  print_array(integers, size);
  //cout << size << endl;
  //int position = 0;
  //search(integers, size, 1, position);
  remove_data(integers, size, 1);
  print_array(integers, size);
  //cout << size << endl;
  //position = 0;
  //search(integers, size, 3,position);
  remove_data(integers, size, 3);
  print_array(integers, size);
  //cout << size << endl;
  //position = 0;
  //search(integers ,size, 5 ,position);
  remove_data(integers, size, 5);
  print_array(integers, size);
  //cout << size << endl;
}




/*In this lab you will have an array of integers with the size 10
Initialize your array to look like
1 3 5
0 1 2
*The numbers beneath the tables are the index values
Insert the numbers 2, 4, and 6 into your array such that it looks
like
1 2 3 4 5 6
0 1 2 3 4 5
Then print out the array to the user.
Finally,
Delete from the array the numbers 1, 3, 5 such that the it looks
like:
2 4 6
0 1 2
Print out the array to the user.
Look at page 51 for more help.
Requirement: Create a function that will search for the number
you are looking for and returns the index where you found it.
This will help you with deleting specific numbers from your
array*/