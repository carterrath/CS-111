#include <iostream>
using namespace std;

void serveFood(int choice) {
  switch (choice) {
  case 1:
    cout << "Chicken is our specialty. Hope you like salmonella." << endl;
  break;
  case 2:
    cout << "We serve the world’s worst lasagna. Guaranteed." << endl;
  break;
  case 3:
    cout << "Clearly you are 5 years old, call your parents to pick you up." << endl;
  break;
  default:
    cout << "Sorry, we only know how to count to three. Get out." << endl;
  }
}

int main() {
  int user_choice;
  cout << "1) Chicken" << endl;
  cout << "2) Lasagna" << endl;
  cout << "3) Alphabet Soup" << endl;
  cout << "What would you like to eat?: ";
  cin >> user_choice;
  serveFood (user_choice);
}
//This program will display a menu of the world’s worst restaurant and the user will enter an integer to choose their selection. Here is what the menu should look like:
//What would you like to eat?
//1) Chicken
//2) Lasagna
//3) Alphabet Soup
//You must create a function called serveFood that accepts the user’s input as a parameter. Inside of the function, you must use a switch statement to determine what to output to the user. Do NOT use if statements. Do NOT ask the user for an input in the function.
//If they choose Chicken, the output will be:
//“Chicken is our specialty. Hope you like salmonella.”
//If they choose Lasagna, the output will be:
//“We serve the world’s worst lasagna. Guaranteed.”
//If they choose Alphabet Soup, the output will be:
//“Clearly you are 5 years old, call your parents to pick you up.”
//If they entered any other number:
//“Sorry, we only know how to count to three. Get out.