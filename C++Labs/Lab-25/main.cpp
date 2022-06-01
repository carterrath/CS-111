#include <iostream>
#include<string>
#include <iomanip>
using namespace std;

string read_sentence();
void print_sentence(string sentence);
string replace_exclamation(string sentence);
void swap_sentence(string& first, string& second);

int main() {
  //Hello World.
  //This is Mr. Smith’s house.
  string first_sentence, second_sentence, exclamation_1, exclamation_2;
  first_sentence = read_sentence();
  second_sentence = read_sentence();
  exclamation_1 = replace_exclamation(first_sentence);
  exclamation_2 = replace_exclamation(second_sentence);
  swap_sentence(exclamation_1, exclamation_2);
  cout<< "\nFirst: ";
  print_sentence(exclamation_1);
  cout << "Second: ";
  print_sentence(exclamation_2);
}

string read_sentence (){
  string sentence;
  cout << "Enter a sentence: ";
  getline(cin, sentence);
  return sentence;
}

void print_sentence(string sentence){
  cout << sentence << endl;
}

string replace_exclamation(string sentence) {
  while(sentence.find('.') != sentence.npos){
    sentence[sentence.find('.')] = '!';
  }
  return sentence;
}

void swap_sentence(string& first, string& second) {
  string temp = first;
  first = second;
  second = temp;
}







/*File Input Loop
1Create a function that reads a single sentence from the user and returns it. This function should take no parameters.

2Create a second function that takes a string as a parameter and prints it to the screen.

3Create a third function that takes a string as a parameter and replaces any periods in it with exclamation points.

4Create a fourth function that takes two strings as parameters and switches their places (swap operation) – this function should have a return type of void.

In main, create two string variables and have the user enter two sentences(using your read function) – store them in variables named first and second. Replace all periods in the strings with exclamation points (using your replace function). Switch the places of first and second (using your
swap function). Finally, print First: followed by the value in first and
Second: followed by the value in second (using your print function).
RESTRICTION: Only ONE of these functions may use pass-by-reference.
HINT: Consider when to use pass-by-reference vs pass-by-value.
Test Case:
(user input shown in <angle brackets>, brackets not part of input)
Enter a sentence: <Hello World.>
Enter another sentence: <This is Mr. Smith’s house.>
First: This is Mr! Smith’s house!
Second: Hello World!*/