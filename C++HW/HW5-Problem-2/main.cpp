//Name: Carter Rath
//Section: CS 111 (30)
#include <iostream>
#include <assert.h>
using namespace std;

double parking_charge(int days) {
  double standard_rate = 10.95, initial_cost, discounted_cost;
  initial_cost = standard_rate * days;
  if (days < 4) {
    discounted_cost = initial_cost * 0.9;
  }else if (days >= 4 && days <= 6) {
    discounted_cost = initial_cost * 0.75;
  }else {
    discounted_cost = initial_cost * 0.6;
  }
  return discounted_cost;
}

int main() {
  //Here are a few variables you may find helpful for this program.
  //Feel free to add additional variables as appropriate.
  int number_days;    
  //this is to collect and store the number of days parked
  double total_cost;  
  //this is to store the result of the function call
  //Hint: add an output statement to display a message asking the user to enter the number of days they have parked at the facility.
  cout << "How many days have you parked here?: "; 
  //Hint: add an input statement to collect the information and store it in number_days
  cin >> number_days;
  //Hint: set up an assignment statement to have total_cost on the left hand side of =
  //the right side of = should be a function call to parking_charge
  total_cost = parking_charge(number_days);
  //Hint: add output statement(s) to display the number of days and related parking charge
  //Be sure to use good label/text to help user understand the message.
  cout << endl;
  cout << "You owe the parking lot facility $" << total_cost << endl;
  
  cout << endl;
  assert (parking_charge(1) == 9.855);
  cout << "Test case passed for 1 day." << endl;
  assert (parking_charge(5)== 41.0625);
  cout << "Test case passed for 5 days." << endl;
  assert (parking_charge(10) == 65.7);
  cout << "Test case passed for 10 days." << endl; 
  return 0;
}

//This is a C++ version of Week 4 Programming Part I.  As a reminder, a long-term parking lot charges $10.95 per day. The parking_charge function takes one parameter that is a number representing the number of days a customer has parked at the facility. The function is expected to return the total charge for the customer based on the following coupon.

//For example,

//parking_charge(1) is expected to return 9.855 because only 10% discount can be applied for less than 4 days.
//parking_charge(5) is expected to return 41.0625 because 25% discount should be applied for parking of 4 - 6 days.
//parking_charge(10) is expected to return 65.7 because 40% discount should be applied for parking of 7 and more days.

//Since this is the first time you are working with a C++ function, the function header has been set up for you along with a function body that return the charge using the standard rate. Your job is to update the function so that it will determine the charge based on the coupon and write the necessary part of the main function to utilize the function.  Additional hints are provided in the main function to guide you through the process.

