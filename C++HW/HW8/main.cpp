#include <iostream>
#include <string>
#include "library.h"
using namespace std;

int main() {
  srand(time(NULL));
  Date my_birthday, one_date;
  string my_sign, sign, time_or_times;

  cout << "Please enter your birthday in the M/D format: ";
  cin >> my_birthday.month;
  cin.ignore();
  cin >> my_birthday.day;
  my_sign = zodiac(my_birthday);
  display(my_birthday);
  cout << " is a " << my_sign << endl;
  cout << endl;
  /* Add a counter-based loop to repeat the following 7 times.
    In addition, the loop shall help determine the number of
    times your sign occurs. Display this information after the loop. */
  int counter = 0, target = 7, count_my_sign = 0;
  
  while(counter < target){
    generate(one_date);
    sign = zodiac(one_date);
    display(one_date);
    cout << " is a " << sign << endl;
    if (sign == my_sign){
     count_my_sign++;
    }
    counter++;
  }
  
  if(count_my_sign == 1){
    time_or_times = " time.";
  }else {
    time_or_times = " times.";
  }

  cout << "Out of the 7 signs generated, "<< my_sign << " occurred " << count_my_sign << time_or_times << endl;
  cout<< endl;
  /* Add a loop to repeat the following until two Gemini occur. */
  string gemini_string;
  gemini_string = "Gemini";
  int gemini_count = 0, sign_count = 0;
  
  while(gemini_count < 2){
    generate(one_date);
    sign = zodiac(one_date);
    display(one_date);
    if(sign == gemini_string){
      gemini_count++;
    }
    cout << " is a " << sign << endl;
    sign_count++;
  }
  cout << "Out of the " << sign_count << " signs generated, " << gemini_string << " occured " << gemini_count << " times." << endl;
  cout<< endl;
  /* Add a loop to repeat the following as long as the user answers
    yes for whether to continue processing another date.
    In addition, the loop shall help determine the number of
    times a date shares the same month as your birth month.
    Display such information after the loop. */
  string yes_no;
  int date_count = 0, month_match_count = 0;
  bool repeat = true;
  while(repeat == true ) {
    generate(one_date);
    sign = zodiac(one_date);
    display(one_date);
    cout << " is a " << sign << endl;
    if(one_date.month == my_birthday.month){
      month_match_count++;
    }
    cout << "Would you like to generate another date?\nType yes or no: ";
    cin >> yes_no;
    if(yes_no == "yes") {
      repeat = true;
    }else {
      repeat = false;
    }
    date_count++;
  }
  if(date_count > 1) {
  cout << "Out of the " << date_count << " dates and signs generated, " << month_match_count << " of them share the same month as your birthday.";
  }else {
    if(month_match_count == 1){
      cout << "The date and sign generated shares the same month as your birthday." << endl; 
    }else {
      cout << "The date and sign generated does not share the same month as your birthday." << endl;
    }
  }
  return 0; //normal completion of the program
}

//The library.h file contains the prototypes of three functions whose implementations are in the library.cpp file. Do not change these files.

//The generate function takes a Date object as a pass-by-reference parameter. It generates the data member for the Date parameter object. This function is created so that you don't have to enter a new date.
//The display function takes a Date object as a pass-by-value parameter. It displays the date in M/D format.
//The zodiac function takes a Date object as a pass-by-value parameter. It returns the corresponding zodiac sign for the given date.
//The main function is currently set up to first ask for your birthday and determine your zodiac sign. It then includes three sets of generating one date and displaying the zodiac sign for that date. Your task is to create three while loops, along with additional related variables and statements.

//The first loop shall be a counter controlled loop that will repeat 7 times the process of generating a date and displaying its corresponding zodiac sign. In addition, the loop shall also determine the number of times your sign occurs.
//The second loop shall repeat the process of generating a date and displaying its corresponding zodiac sign until two Gemini occur.
//The third loop shall ask the user whether they want to see another date and proceed with the process of generating a date and displaying its corresponding zodiac sign as long as the user says yes. In addition, the loop shall also determine the number of times a date has the same month as your birth month.
//In the file to be submitted for the assignment, you will first display a link to your program, and then followed with the source codes of your main.cpp file.  Since the other two files are not changed, you don’t have to submit them.  Then submit your file as an attachment on Cougar Course by the deadline.