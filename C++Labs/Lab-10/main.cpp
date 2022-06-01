#include <iostream>
using namespace std;

void digits(int input, int& hundreds, int& tens, int& ones) {
  if (input < 100) {
    hundreds = 0;
  }else {
    hundreds = input % 1000 / 100;
  }
  if (input < 10) {
    tens = 0;
  }else {
    tens = input % 100 / 10;
  }
  if(input < 0) {
    ones = 0;
  }else {
    ones = input % 10;
  }
}

int main() {
  int num_input, num_hundreds, num_tens, num_ones;
  cout << "Enter any integer: ";
  cin >> num_input;
  digits(num_input, num_hundreds, num_tens, num_ones);
  cout << "hundreds: " << num_hundreds << ", tens: " << num_tens << ", ones: " << num_ones; 
}
//Create a function named digits that takes four parameters as follows:
//An integer named input, passed by value, that takes the input to the function.
//Three integers named hundreds, tens, and ones, passed by reference (&), that are used to return the digit in the hundreds, tens, and ones place of input. If there is no digit a zero should be returned. Assume the input will not be negative. The function should have a return type of void.
//Hint: Remember modulus (%)
//Write a main program to test the function with a user-inputted number, the function itself should not print anything or accept any user input directly (i.e. no cin or cout in the function).
//Test with all of the following inputs:
//357 -> hundreds: 3, tens: 5, ones: 7
//12 -> hundreds: 0, tens: 1, ones: 2
//7 -> hundreds: 0, tens: 0, ones: 7
//1234 -> hundreds: 2, tens: 3, ones: 4