#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream infile("input.txt");
  ofstream outfile("output.txt");
  if(!infile.is_open())
  {
    cout<< "The file cannot be opened.";
    return -1;
  }
  string word;
  do 
  {
    infile >> word;
    if(word[0] >= 'A' && word[0] <= 'Z'){
      word+= '!';
    }
    outfile << word << "\n";
  }while(!infile.eof());

  infile.close();
  outfile.close();
  return 0;
}



/*
File I/O – Break Apart Words & Identify Capitals
Write a program that will read words from a file (separated by
spaces) and write them to another file, separated by new lines.
Any word that has its’ first letter capitalized in the input file should
have an excalamation point after it in the output file. Note that the
program should work on any size input.
(Test run on next page)
Test run:
Sample Input File Contents (create file manually in your repl):
The Quick Brown Fox jumps over the Lazy Dog
Sample Output File Contents (created by your program):
The!
Quick!
Brown!
Fox!
jumps
over
the
Lazy!
Dog!*/