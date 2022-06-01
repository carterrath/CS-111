#include <iostream>
#include <string>
using namespace std;

void self_checkout(string store, string name, string item, double quantity, double cost) {
  cout << "Hello " << name << ", welcome to " << store << "!" << endl;
  cout << "You are purchasing " << quantity << " " << item << endl;
  cout << "That will be $" << quantity * cost << endl;
}

int main() {
  string user_store, user_name, user_item, user_first_name;
  int space_index;
  double user_cost, user_quantity;
  cout << "Enter the name of the store: "; //Duh Market
  getline(cin, user_store);
  cout << "Enter your name: "; //John Smithy
  getline(cin, user_name); 
  space_index = user_name.find(' ');
  user_first_name = user_name.substr(0,space_index);
  cout << "Enter the item you wish to purchase: "; // Flaming Hot Cheetos
  getline(cin, user_item);
  cout << "How many do you want to buy?: "; //3
  cin >> user_quantity;
  cout << "How much does it cost? $"; //2.50
  cin >> user_cost;
  self_checkout(user_store, user_first_name, user_item,user_quantity, user_cost);
}
//This program is a pseudo self checkout machine. The user will be asked to enter the name of the store, their name, the name of the item, the amount they are buying, and the price of the item.
//The program will then output a welcome message, a message that tells them they what they are buying, and the total amount the user has to enter to purchase their item(s).
//Requirement: Create a function that will display the outpu. messages. This means that you have to pass the names of the store, user, and item, the amount, and the price of the item to the function.
//Sample Run (The bold is user input):
//Enter the name of the store: boldDuh Market
//Enter your name: boldJohn Smithy
//Enter the item you wish to purchase: boldFlamin Hot Cheetos
//How many do you want to buy? bold3
//How much does it cost? bold2.50
//Hello John, welcome to Duh Market!
//You are purchasing 3 Flamin Hot Cheetos
//That will be $7.5