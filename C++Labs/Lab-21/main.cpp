#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream fin;
  string file_name;
  int num; 
  int num_sum = 0;
  cout<< "Enter a file name: ";
  cin >> file_name;
  fin.open(file_name);
  if(fin.is_open()) {
    fin >> num;
    while(fin) {
     cout << num << endl;
     num_sum += num;
     fin >> num;
    } 
    cout << "Total is: " << num_sum;
  }else {
    cout << "Sorry, that file does not exist." << endl;
  }
  fin.close();
}
//File Input Loop
//Have the user input a filename to read in integers from. Print each to the screen, one per line and keep a running total. Print the total at the end. If the file does not exist say so and do not print the total. Be sure your code closes the file when it is done using it.
//Test Case 1:
//File contents (ask user to enter filename, the file they enter contains this):
//2 4 6 8 10
//Sample output:
//Read 2 from file.
//Read 4 from file.
//Read 6 from file.
//Read 8 from file.
//Read 10 from file.
//Total is 30.
//Test Case 2:
//File contents (ask user to enter filename, the file they enter contains this):
//1
//3
//5
//Sample Output:
//Read 1 from file.
//Read 3 from file.
//Read 5 from file.
//Total is 9.
//Test Case 3:
//(nonexistent file – user enters nonexistent filename)
//Sample output:
//Failed to open file.