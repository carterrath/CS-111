#include <iostream>
#include<fstream>
using namespace std;

void read_array(int arr[], int size);
void multiply_array(int arr[], int size, int multiplier);
void print_array(const int arr[], int size);

int main() {
  const int SIZE = 5; 
  int user_multiplier;
  int numbers[SIZE];
  read_array(numbers, SIZE);
  cout << "Enter multiplier: ";
  cin >> user_multiplier;
  multiply_array(numbers, SIZE, user_multiplier);
  print_array(numbers, SIZE);
}
void read_array(int arr[], int size)
{
  //int count = 0;
  for(int index=0; index < size; index++)
  {
    cout << "Enter an array value: ";
    cin >> arr[index];
  }

}
void multiply_array(int arr[], int size, int multiplier)
{
  for(int index = 0; index < size; index++)
  {
    arr[index]*= multiplier;
  }

}
void print_array(const int arr[], int size)
{
  cout <<"Array Contents: ";
  for(int index = 0; index < size ; index++)
  {
    cout << arr[index] << " "; 
  }
}









/*Array Loop Function
- Create a function called read_array that takes an array of integers and
the array size as parameters (total of 2 parameters to the function with
a return type of void). Remember that arrays are always passed by
reference and do not need an &. This function reads in values to the
array from the user, and should work for any size array
- Create a function called multiply_array that takes an array of integers,
the array size, and an integer value for the multiplier as parameters
(total of 3 parameters to the function with a return type of void). This
function should multiply the values in the array by the multiplier, and
should work on an array of any size. This function should NOT use cin
or cout.
- Create a function called print_array that takes an array of integers and
the array size as parameters (total of 2 parameters to the function with
a return type of void). This function prints the values in the array to the
screen, and should work for any size array.
- Finally, build a main that calls read_array, then asks the user for a
multiplier and calls multiply_array and finally calls print_array. Declare
the array in main and use an array size of 5
- Requirement: Each function must use a for loop.
Test Case:
(user input shown in <angle brackets>, brackets not part of input)
Enter array value: <2>
Enter array value: <4>
Enter array value: <6>
Enter array value: <8>
Enter array value: <10>
Enter array value: <2>
Enter multiplier: <3>
Array contents: 6 12 18 24 30*/