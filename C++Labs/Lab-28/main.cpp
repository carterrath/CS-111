#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream infile("input.txt");
  if(!infile.is_open()){
    cout << "The file cannot be opened." << endl;
    return -1;
  }
  ofstream outfile("output.txt");
  const int SIZE = 10;
  int nums1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int counter = 0;
  int nums2[SIZE];
  int sums[SIZE];
  while (counter < SIZE) {
    infile >> nums2[counter];
    //infile.ignore(' ');
    sums[counter] = nums1[counter] + nums2[counter];
    cout << sums[counter] << endl;
    counter++;
  }
  //cout<< "The sums are: \n";
  counter = 0;
  while (counter < SIZE){
  outfile << sums[counter] << ' ';
  counter++;
  }
  infile.close();
  outfile.close();
  return 0;
}




/*Modify Lab 27 so that instead of filling the second array by
asking the user, you grab numbers from a file and store them
into the second array.
In addition, instead of outputting to the screen, you must output
the entire sum array to a file.
Use the following Input file.
Input file:
11 12 13 14 15 16 17 18 19 20 21 23 24 25 26 27 28 29 30
Sample Output File
12 14 16 18 20 22 24 26 28 30
Notice that the input file has more numbers than what can fit in
your array. You should stop reading in numbers as soon as you
get the same amount of numbers as the size of the array.*/