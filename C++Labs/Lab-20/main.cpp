#include <iostream>
#include <string>
using namespace std;
int main() {
  int user_percent;
  char user_grade;
  do
  {
    cout << "Enter your percentage grade(0-100%): ";
    cin >> user_percent;
    if(user_percent <= 100 && user_percent >= 90){
      user_grade = 'A';
    }
    if(user_percent <= 89 && user_percent >= 80){  
      user_grade = 'B';
    }
    if(user_percent <= 79 && user_percent >= 70){
      user_grade = 'C';
    }
    if(user_percent<= 69 && user_percent >= 60){
      user_grade = 'D';
    }
    if(user_percent<= 59 && user_percent >= 0){
      user_grade = 'F';
    }
    if(user_percent < 0 || user_percent > 100){
      cout<< "Invalid percent." << endl;
    }
  }while (user_percent < 0 || user_percent > 100);
  cout << user_percent << "% is a grade of " << user_grade << "."<< endl;
}
//Grade Percentage Loop
//Create a program that has the user enter a grade in percentage form, then tells them what letter grade it corresponds to. Allow only grades in the range of 0%-100% inclusive, if the value is below 0% or above 100% have the user re-enter it.
//Hint: The user will always need to enter a grade at least once, but may need to try again one or more times if the entry is invalid, so use a do-while loop.
//Note:
//90-100%: A, 80-89%: B, 70-79%: C, 60-69%: D, 0-59%: F,
//assume all grades will be integers for this lab.
//Test run 1:
//Enter a percentage grade(0-100%): -3
//Enter a percentage grade(0-100%): 101
//Enter a percentage grade(0-100%): 65
//65% is a grade of D.
//Test run 2:
//Enter a percentage grade (0-100%): 97
//97% is a grade of A.