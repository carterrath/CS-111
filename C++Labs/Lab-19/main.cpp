#include <iostream>
using namespace std;

void calculate(double & score, double & total, double & lowest, double & highest);

int main() {
  int counter, num_scores, quit, num_students;
  double test_score, sum_scores, high_score, low_score, average_score; 
  num_students = 1;
  while (num_students < 4){
      num_scores = 0;
      test_score = 0;
      sum_scores = 0; 
      quit = -99;
      low_score = 0;
      high_score = 0; 
    while (test_score != quit) { 
      cout <<"Student " << num_students << ", enter your assignment score: ";
      cin >> test_score;
      if(num_scores == 0) {
        low_score = test_score;
        high_score = test_score;
      }
      if (test_score != quit) {
        calculate(test_score, sum_scores, low_score, high_score);
        num_scores++;
      }
    }
      if(num_scores == 0) {
        cout << "\nNo assignment scores were inputted."<< endl;
        cout << endl;
        //num_students = 4;
      }
      else{
      average_score = sum_scores / num_scores;
      cout << "\nThe total score is: " << sum_scores<< endl;
      cout << "The lowest score is: " << low_score << endl;
      cout << "The highest score is: " << high_score << endl;
      cout << "The average score is: " << average_score << endl;
      cout << endl;
      }
    num_students++;
  }
}
void calculate(double & score, double & total, double & lowest, double & highest) {
  total += score;
  if (score < lowest){
    lowest = score;
  }
  if (score > highest) {
    highest = score;
  }
}