#include <iostream>
#include "library.h"
using namespace std;

  void insert_data(int arr[], int& size, int new_integer) 
  {
    int position = 0;
    while (new_integer > arr[position] && position < size) 
    {
      position++;
    }
    //cout<< position<< endl;
    for (int index = size; index > position; index--) 
    {
      arr[index] = arr[index - 1];
    }
    arr[position] = new_integer;
    size++;
  }
  
  void remove_data(int arr[], int& size, int discard)
  {
    int position = search(arr, size, discard);
    for(int index = position; index < size; index++)
    {
      arr[index] =arr[index+1];
    }
    size--;
  }
  
int search(int arr[], int size, int discard){
    int position = 0;
    while(discard != arr[position]){
      position++;
    }
    return position;
}
void print_array(int arr[], int size)
{
  for (int counter = 0; counter < size; counter++) 
  {
    cout << arr[counter]<< " ";
  }
  cout << endl;
}