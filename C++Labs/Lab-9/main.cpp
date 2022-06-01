#include <iostream>
using namespace std;
// Write a function in C++ that calculates the average of three decimal numbers and returns the result. The function should take three parameters of type float and have a return type of float, and should not interact directly with the user at all (i.e. no cin or cout in the function). 
//Write a main function that has the user enter three decimal numbers, uses your function to calculate the average and prints the average.
float avg_value(float a, float b, float c) {
  float num_sum, sum_divide;
  num_sum = a + b + c;
  sum_divide = num_sum / 3;
  return sum_divide;
}
int main() {
  float num_1, num_2, num_3;
  cout << "Enter your first decimal number: ";
  cin >> num_1;
  cout << "Enter your second decimal number: ";
  cin >> num_2;
  cout << "Enter your third decimal number: ";
  cin >> num_3;
  cout << "The average value of these three decimal numbers is: " << avg_value(num_1, num_2, num_3) << endl;
}