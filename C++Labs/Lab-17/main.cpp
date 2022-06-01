#include <iostream>
using namespace std;
int main() {
  int counter, num_scores;
  double test_score, sum_scores, high_score, average_score;
  counter = 0;
  num_scores = 10;
  sum_scores = 0;
  high_score = -1; 
  while (counter < num_scores) {
    cout << "Enter your test score: ";
    cin >> test_score; 
    if(test_score>high_score) {
      high_score = test_score;
    }
    sum_scores += test_score;
    counter += 1;
  }
  average_score = sum_scores / num_scores;
  cout << "The total score is: " << sum_scores<< endl;
  cout << "The highest score is: " << high_score << endl;
  cout << "The average score is: " << average_score << endl;
}

//In this lab, you will use a while loop to repeatedly ask a user for a test score. Use a counter to exit the loop when the user has entered 10 test scores. The goal of your loop to is figure out the total of all the scores and the highest score.
//After the loop has finished, output the total, the highest score and the average of all the scores.
//Hint: use a variable called high_score and set it to some negative value before the loop. What can you do with it?
//Sample output:
//Enter number: 1
//Enter number: 1
//Enter number: 1
//Enter number: 1
//Enter number: 1
//Enter number: 1
//Enter number: 1
//Enter number: 1
//Enter number: 1
//Enter number: 2
//The total score is 11
//The highest score is 2
//The average is 1.1