#include <iostream>
#include<string>

using namespace std;
int main() {
//Part 1:
  int num_1, num_2, num_3, num_4, num_5, num_6;
  cout << "Enter string: "; //E3:4{/5>1$^:9?2
  cin.ignore(1);
  cin >> num_1;
  cin.ignore(3, ':');
  cin >> num_2;
  cin.ignore(6, '/');
  cin >> num_3;
  cin.ignore(8, '>');
  cin >> num_4;
  cin.ignore(12,':');
  cin >> num_5;
  cin.ignore(14, '?');
  cin >> num_6;
  cout << "The sum of the numbers in the string is: " << num_1 + num_2 + num_3 + num_4 + num_5 + num_6 << endl;
  cout << endl;
 //Part 2:
  string email, domain_name;
  int symbol_index;
  cout << "Enter your email address: ";//jjjj@cougars.csusm.edu
  cin >> email;
  symbol_index = email.find('@');
  domain_name = email.substr(symbol_index+1);
  cout << "The domain name is: " << domain_name << endl;
  cout << email.substr(symbol_index);
}
//Part 1)
//The user enters E3:4{/5>1$^:9?2 into your program. Use cin to grab the numbers, find the sum of all the numbers, and output it to the screen.
//The sum for this should be 24.
//Hint: Look at cin.ignore()
//Part 2)
//The user enters an email address into your program. You must splice everything after the @ symbol and output it.
//For example, if we enter:
//Joe.Smithy@cougars.csusm.edu
//The program should output:
//cougars.csusm.edu
//Assume, they always enter a string with an @ symbol.
//Test cases:
//jjjj@cougars.csusm.edu should output cougars.csusm.edum@gmail.com should output gmail.com