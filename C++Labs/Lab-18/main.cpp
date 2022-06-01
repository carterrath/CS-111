#include <iostream>
using namespace std;

void calculate(double & score, double & total, double & lowest);

int main() {
  int counter, num_scores, quit;
  double test_score, sum_scores, high_score, low_score, average_score;
  num_scores = 0;
  sum_scores = 0; 
  quit = -99;
  low_score = 0; 
  while (test_score != quit) { 
    cout << "Enter your test score: ";
      cin >> test_score;
    if(num_scores == 0) {
      low_score = test_score;
    }
    if (test_score != quit) {
      calculate(test_score, sum_scores, low_score);
      num_scores++;
    }
  }
  average_score = sum_scores / num_scores;
  cout << "\nThe total score is: " << sum_scores<< endl;
  cout << "The lowest score is: " << low_score << endl;
  cout << "The average score is: " << average_score << endl;
} 
void calculate(double & score, double & total, double & lowest) {
  total += score;
  if (score < lowest){
    lowest = score;
  }
}
//Modify Lab 17 to be a non-counter-based loop. In this scenario assume that there are an unknown number of scores being entered. 
//The only way to exit the loop is when the user enters -99. 
//Assume that this professor gives out negative scores except for -99 because that’s their least favorite number for assignments. 
//So they are willing to give out -100 or less. 
//Instead of looking for the highest score, the program looks for the lowest score. However, instead of having most of the code in the while loop, create a function called calculate that receives a score, total, and lowest as parameters. In this function you should update total and lowest accordingly.
//Hint: If you are updating two of your parameters and you need those changes for the next iteration in the loop, what do you use? Pass by Value? Or Pass by Reference?
//Sample output:
//Enter number or -1 to quit: 5
//Enter number or -1 to quit: 5
//Enter number or -1 to quit: -5
//Enter number or -1 to quit: 4
//Enter number or -1 to quit: 5
//Enter number or -1 to quit: -99
//The total score is 14
//The lowest score is -5
//The average is 2.8