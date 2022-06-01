#include <iostream>
using namespace std;
int main() {
  const int SIZE = 10;
  int nums1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int counter = 0;
  int nums2[SIZE];
  int sums[SIZE];
  while (counter < SIZE) {
    cout << "Enter an integer: ";
    cin >> nums2[counter];
    sums[counter] = nums1[counter] + nums2[counter];
    //cout << sums[counter] << endl;
    counter++;
  }
  cout<< "The sums are: \n";
  counter = 0;
  while (counter < SIZE){
  cout << sums[counter] << ' ';
  counter++;
  }
}



/*Your program will create two integer arrays. Create a constant variable with a value of 10 and use that to declare both arrays.
The first array will have the values:
{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
For the second array, you MUST ask the user to enter values for the entire array. (Hint: look at pages 46 and 47) The program
will then add the first two numbers and store the sum into the
first slot of the third array called sum. It will do this again but
with the next two numbers and stores the result into the second
slot. It will then repeat this process with all the numbers until
you reached the end of both arrays.
For example, if you have:
Array 1 = {1, 2, 3, 4 ,5}
Array 2 = {1, 2, 3, 4, 5}
Then:
Sum array = {2, 4 ,6, 8, 10}
The program will then output the sum array to the user.
Sample run:
Enter a number: 11
Enter a number: 12
Enter a number: 13
Enter a number: 14
Enter a number: 15
Enter a number: 16
Enter a number: 17
Enter a number: 18
Enter a number: 19
Enter a number: 20
The sums are:
12 14 16 18 20 22 24 26 28 30*/