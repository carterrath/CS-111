//Name: Carter
//Section: CS 111 (30)
#include <iostream>
using namespace std;

//since this is the first C++ programming assignment, prompts are provided in the main function
int main() {
  //Here are a few variables you may find helpful for this program.
  //Feel free to add additional variables as appropriate.
  int tokens_per_dollar = 4;
  int tokens_per_game = 3;
  int number_of_dollars;  //this is to collect and store the number of $1 bills
  int number_tokens;      //this is to store the number of tokens from the machine
  int number_games;       //this is to store the number of air-hockey number_games
  int leftover_tokens;    //this is to store the number of tokens left after the air-hockey games
  //Hint: add an output statement to display a message asking the user to enter the number of $1 bills
  cout << "How many dollars do you have?: ";
  //Hint: add an input statement to collect the information and store it in number_one_dollar
  cin >> number_of_dollars;
  //Hint: set up an assignment statement to determine number_tokens based on number_one_dollar and tokens_per_dollar.
  number_tokens = number_of_dollars * tokens_per_dollar;
  //Hint: set up assignment statements to determine the values of number_games and leftover_tokens
  number_games = number_tokens / tokens_per_game;
  leftover_tokens = number_tokens % tokens_per_game;
  //Hint: add an output statement to display the number of air-hocky games the user could play
  cout << endl;
  cout << "You can play " << number_games << " air-hockey games." << endl;
  //Hint: set up a conditional statement to tell the user how many leftover tokens they would have after playing air-hockey
  if (leftover_tokens > 0) {
    cout << "You will have " << leftover_tokens << " tokens leftover to play other arcade games." << endl;
    cout << "You would need " << 3 - leftover_tokens << " more tokens to play an additional air-hockey game." << endl;
  }else {
    cout << "You will have spent all of your tokens!" << endl;
  }
  return 0;
}
//This is an upgrade of Week 1 Programming Assignment. It can be used to determine the number of air-hockey games a group could play at a self-service arcade. The arcade has no attendant. There is a token machine that takes $1 bills and gives out 4 tokens per dollar. Each air-hockey game costs 3 tokens to play.

//Your program shall first prompt for the user to enter the amounts of $1 they would like to enter to the token machine. Then it shall tell the user the total amount of token they will receive and the maximum number of air-hockey games they can play. If there are any leftover tokens after all of the air-hockey games, the program shall let the user know that they can use the extra token(s) to play other games in the arcade.

//For example, if the user has two $1 bills, your program shall tell the user that they can play 2 air-hockey games and have 2 extra tokens to play another arcade game.