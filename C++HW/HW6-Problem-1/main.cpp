#include <iostream>
#include <string>
#include <assert.h>
using namespace std;
/*
Replace the function body with appropriate statements to return
the Pig Latin version of the provided word in the parameter.
You are required to use a switch statement to check the first
letter of the word. Hint, use default for non-vowel cases.
*/
string pig_latin(string word) {
  string new_word, word_minus_letter, first_letter;
  char letter_determination;
  int first_letter_index;
  first_letter = word.substr(0,1);
  first_letter_index = word.find(letter_determination);
  letter_determination = word[0];
  word_minus_letter = word.substr(1);
  switch (letter_determination) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
      new_word = word + "yay";
    break;
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      new_word = word + "way";
    break;
    case 'i':
    case'I':
      new_word = word + "kayay";
    break;
    default:
      new_word = word_minus_letter + first_letter +"ay";
  }
  return new_word;
}

int main () {
    string one_word, pig_latin_word, test ;
  cout << "Please enter a word of your choice: ";
  cin >> one_word;
  pig_latin_word = pig_latin(one_word);
  cout << one_word << " is translated to pig latin is " << pig_latin_word << endl;
  //Add appropriate statement(s) to call the pig_latin function
  //and display the word and its translation.
  cout<< endl;
  assert (pig_latin("apple") == "appleyay");
  cout << "Test case passed for apple." << endl;
  assert (pig_latin("eagle")== "eagleyay");
  cout << "Test case passed for eagle." << endl;
  assert (pig_latin("orange") == "orangeway");
  cout << "Test case passed for orange." << endl; 
  assert (pig_latin ("italy")== "italykayay");
  cout << "Test case passed for italy" << endl;
   assert (pig_latin("soup") == "oupsay");
  cout << "Test case passed for soup." << endl;
  return 0; //normal completion of the program
}
//If the English word starts with a consonant, simply take the consonant and move it to the end of the word, adding the suffix "ay" to the end of the word. For example pig_latin("soup") is expected to return "oupsay".
//If the English word starts with either 'a' or 'e', leave the word as is and add the suffix "yay" to the end of the word. For example, pig_latin("apple") is expected to return "appleyay" and pig_latin("eagle") is expected to return "eagleyay".
//If the English word starts with either 'o' or 'u', leave the word as is and add the suffix "way" to the end of the word. For example, pig_latin("orange") is expected to return "orangeway" and pig_latin("uncle") is expected to return "uncleway".
//Define your own rule for English words starting with the vowel 'i'.