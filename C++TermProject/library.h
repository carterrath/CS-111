#include <iostream>
#include <string>
using namespace std;

struct Clothes
{
  float rating, original_price, price;
  bool sale, xsmall, small, medium, large, xlarge;
  string type, brand, name, color, pattern,color_code;
  int num_reviews;
  long int sku_num; 
};
void get_choice(char& choice);//This displays the menu and gets the user's choice
void determine_action(char choice, bool& stop, Clothes c[], int& size, Clothes& new_item);//This takes the user's choice and calls the functions that correspond to the choice
void collect_data(Clothes c[], int& size);//This reads the data from the file
void summary(const Clothes c[], int size);//This provides the item list in columns and gives the summary statistics
void price_determination(Clothes c[], int size);
void item_find(Clothes c[], int size);
void create_element(Clothes& new_item);//This allows the user to create an element
void add_element(Clothes c[], int& size, Clothes new_item);//This adds the user-created element to the array
void remove_element(Clothes c[], int& size);//This asks the user which element they want to delete, it searches for the element, and removes it
