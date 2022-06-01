#include <iostream>
using namespace std;
//Rewrite Lab 2 using the C++ programming language

int main() {
  int num_1;
  int num_2;
  //number_1 = int(input("Enter an integer"))
  cout << "Enter an integer: " << endl;
  cin >> num_1;
  //number_2 = int(input("Enter another integer"))
  cout << "Enter another integer: " << endl;
  cin >> num_2;
  //integers_added = number_1 + number_2
  cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;
  //integers_subtracted = number_1 - number_2
  cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;
  //integers_multiplied = number_1 * number_2
  cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
  //integers_divided = number_1 / number_2
  cout << num_1 << " / " << num_2 << " = " << (float) num_1 / num_2 << endl;
  cout << "or" << endl;
  //quotient = number_1 // number_2
  //remainder = number_1 % number_2
  cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << " R " << num_1 % num_2 << endl;
  return 0;
}