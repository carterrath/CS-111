#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "library.h"
using namespace std;

int main() {
  SaleItem one_item;
  ifstream file;
  file.open("ads.csv");
  if (!file.is_open()) {
    cout << "Can't open the ads.csv file.\n";
    return 1;
  }
  cout<< "ITEM" << setw(23) << "ORIGINAL" << setw(12) << "SALE" << setw(14) << "DIFFERENCE" << setw(12) << "DISCOUNT"<< endl;
  do 
  {
  collect_item(file, one_item);
  double saving = one_item.original_price - one_item.sale_price;
  double discount = saving / one_item.original_price * 100;
  cout << fixed << showpoint << setprecision(2);
  cout << left << setw(18) << one_item.item_name << right<< "$";
  cout << setw(8) << one_item.original_price;
  cout << setw(5) << "$";
  cout << setw(8) << one_item.sale_price;
  cout << setw(5) << "$";
  cout << setw(8) << one_item.original_price - one_item.sale_price;
  cout << setprecision(1);
  cout << setw(8) <<discount << "%" << endl;
  } while(!file.eof());
 
  file.close();
 
}



/*In this assignment, you are asked to modify the provided program in three ways:

In the library.cpp file, answer the questions listed in the comment section above the collect_item function.
Set up a loop to process all data in the file until the end of the file is reached. After it works for the current "ads.csv" file, add an additional line of the same structure to the "ads.csv" file. Your program should still work.
Update the output statements in the program using parametric manipulator(s) it order to generate a nicely organized display as illustrated by the following image. You are not allowed to use tabs or multiple spaces to set up the format. You don't have to match the exact number of spaces between the columns but the alignments among items within a same column shall preserve. Note that the monetary amounts must be listed with two digits after the decimal point and that the discount percentage must be listed with one digit after the decimal point.*/