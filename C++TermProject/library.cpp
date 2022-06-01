#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "library.h"
using namespace std;

void get_choice(char& choice)
{
  cout<< "\nYou have the following choices: "<< endl;
  cout << "A. A list of the clothing items followed by a summary." << endl; 
  cout << "B. Determine which items you can buy with the price range you enter." << endl;
  cout << "C. Enter a color, brand, type, name, or pattern and we will display the items that match those traits." << endl;
  cout << "D. Add a clothing item of your choice to our shop."<< endl;
  cout << "E. Remove a clothing item of your choice from our shop. " << endl;
  cout << "F. To stop." << endl;
  cout << "\nType your letter of choice and press enter key: ";
  cin >> choice;
}

void determine_action(char choice, bool& stop, Clothes c[], int& size, Clothes& new_item)
{
  if(choice == 'A'|| choice == 'a')
  {
    summary(c, size);
  }
  else if(choice == 'B'||choice == 'b')
  {
    price_determination(c, size);
  }
  else if(choice == 'C'||choice == 'c')
  {
    item_find(c, size);
  }
  else if(choice == 'D'||choice == 'd')
  {
    create_element(new_item);
    add_element(c, size, new_item);
  }
  else if(choice == 'E'||choice == 'e')
  {
    remove_element(c, size);
  }
  else if(choice == 'F'||choice == 'f')
  {
    stop = true;
    cout << "\nUser chose to stop." << endl;
  }
  else
  {
    cout << "\nInput invalid. Please enter a valid choice."<<endl;
  }
}
void summary(const Clothes c[], int size)
{
  double sum_prices = 0 , average_price = 0; 
  int top_rated = 0, most_reviewed = 0, UO_items = 0, sale_items = 0, pattern_items = 0;
  
  cout << "\nItem List" << endl;
  cout << "Price" << setw(7) << "Sale" << setw(10) << "Old Price" << setw(5) << "Type" << setw(10) << "Brand" << setw(14) << "Name" << setw(20) << "Color" << setw(7) << "Print" << setw(9) << "XSmall" << setw(8) << "Small" << setw(10) << "Medium" << setw(8) << "Large" << setw(10) << "XLarge" << setw(8) << "SKU #" << setw(15) <<"Color Code" << setw(7) <<"Rating" << setw(8) <<"Reviews" << endl;
  cout << endl;
  for(int i = 0; i < size; i++)
  {
  string is_sale, available_xsmall, available_small, available_medium, available_large, available_xlarge;
  if(c[i].sale == true)
  {
    is_sale = "Yes";
  }
  else
  {
    is_sale = "No";
  }
  if(c[i].xsmall == true)
  {
    available_xsmall = "Yes";
  }
  else 
  {
    available_xsmall = "SOLD OUT";
  }
  if(c[i].small == true)
  {
    available_small = "Yes";
  }
  else
  {
    available_small = "SOLD OUT";
  }
  if(c[i].medium == true)
  {
    available_medium = "Yes";
  }
  else 
  {
    available_medium = "SOLD OUT";
  }
  if(c[i].large == true)
  {
    available_large = "Yes";
  }
  else
  {
    available_large = "SOLD OUT";
  }
  if(c[i].xlarge == true)
  {
    available_xlarge = "Yes";
  }
  else
  {
    available_xlarge = "SOLD OUT";
  }
    cout << fixed << showpoint;
    cout << left << setprecision(2) << "$" <<setw(7)<< c[i].price;
    cout << setw(5) << is_sale;
    cout << "$" << setw(9) <<c[i].original_price;
    cout << setprecision(1) <<setw(9) << c[i].type;
    cout << setw(15) << c[i].brand;
    cout << setw(19) << c[i].name;
    cout << setw(7) << c[i].color;
    cout << setw(8) << c[i].pattern;
    cout << setw(9) << available_xsmall;
    cout << setw(9) << available_small;
    cout << setw(9) << available_medium;
    cout << setw(9) << available_large;
    cout << setw(9) << available_xlarge;
    cout << setw(10) << c[i].sku_num;
    cout << setw(11) << c[i].color_code;
    cout << setw(7) << c[i].rating;
    cout << c[i].num_reviews << endl;
    sum_prices += c[i].price;
    if (i == 0)
    {
      top_rated = i;
      most_reviewed = i;
    }
    else 
    {
      if(c[i].rating > c[top_rated].rating)
      {
        top_rated = i;
      }
      if(c[i].num_reviews > c[most_reviewed].num_reviews)
      {
        most_reviewed = i;
      }
    }
    if(c[i].brand == "UO")
    {
      UO_items++;
    }
    if(c[i].sale == true)
    {
      sale_items++;
    }
    if(c[i].pattern != "none")
    {
      pattern_items++;
    }
  }
  average_price = sum_prices / size;
  cout << "\nSummary of Items" << endl;
  cout << right <<setw(5) << "1. " <<"There are " <<  size << " different clothing items at our store." << endl;
  cout << setw(5) << "2. " << "The lowest priced clothing item is the " << c[0].brand << " " << c[0].name << " " << c[0].type << setprecision(2) << " priced at $" << c[0].price << "." << endl;
  cout << setw(5) << " " << "The highest priced clothing item is the " << c[size -1].brand << " " << c[size-1].name << " " << c[size-1].type << " priced at $" << c[size-1].price << "." << endl;
  cout << setw(5) << "3. " << "The average price of a clothing item is $" << average_price << "." <<endl;
  cout << setw(5) << setprecision(1) << "4. " << "The top rated clothing item is the " << c[top_rated].brand << " " << c[top_rated].name << " " << c[top_rated].type << " rated at " << c[top_rated].rating << " stars." << endl;
  cout << setw(5) << "5. " << "The item with the most reviews is the " << c[most_reviewed].brand << " " << c[most_reviewed].name << " " << c[most_reviewed].type << " with " << c[most_reviewed].num_reviews << " reviews." <<endl;
  cout << setw(5) << "6. " << "There are " << UO_items << " clothing items made by Urban Outfitters." << endl;
  cout << setw(5) << "7. " << "There are " << sale_items << " clothing items on sale." << endl;
  cout << setw(5) << "8. " << "There are " << pattern_items << " clothing items that have a printed pattern." << endl;
  }

void price_determination(Clothes c[], int size)
{
  double user_budget;
  cout << "\nWe are going to help you find a clothing item that falls in your price range." << endl;
  int item_count = 0;
  do
  {
    cout << "\nEnter -1 to quit or enter the amount of money you are looking to spend: $";
    cin >> user_budget;
    cout << "\nYou can afford the following items: " << endl;
    for(int i = 0; i < size; i++)
    {
     if (user_budget >= c[i].price)
      {
       item_count++;
       cout << fixed << showpoint << setprecision(2);
       cout << item_count << ". The " << c[i].brand << " " << c[i].name << " " << c[i].type << " priced at $" << c[i].price << " in the color " << c[i].color <<"." << endl;
      }
    }
    if(item_count == 0)
    {
      cout << "Sorry, there are no clothing items that are within the price range you entered. Try entering a higher amount." << endl;
    }
  }while(item_count == 0 && user_budget != -1);
}

void item_find(Clothes c[], int size)
{
  string user_choice, user_color, user_type, user_brand, user_name, user_pattern, yes_no; 
  bool search_complete = false;
  int item_match = 0;
  cout << "\nWe are going to help you find a clothing item that matches what you are looking for." << endl;
  while(search_complete == false)
  {
    cout << "\nWould you like to search for a clothing item by color, brand, type, name, or pattern?: ";
    cin >> user_choice;
    cin.ignore();
    if (user_choice == "color" || user_choice == "Color")
    {
      while(item_match == 0)
      {
        cout << "\nWhat is the color of the clothing item you are looking for?: ";
        getline(cin,user_color);
        cout << "\nThe following items match that color:" << endl;
        for(int i = 0 ; i < size; i++)
        {
          if(user_color == c[i].color)
          {
           item_match++;
           cout << item_match << ". The " << c[i].brand << " " << c[i].name << " " << c[i].type << " is available in the color " << c[i].color << "." << endl;
           search_complete = true;
          }
        }
        if(item_match == 0)
        {
          cout << "Sorry, there are no items that match the color you are looking for. Please try a different color." << endl;
        }
      }
    }
    else if (user_choice == "brand" || user_choice == "Brand")
    {
      while(item_match == 0)
      {
        cout << "\nWhat is the brand of the clothing item you are looking for?: ";
        getline(cin, user_brand);
        cout << "\nThe following items made by that brand:" << endl;
        for(int i = 0 ; i < size; i++)
        {
          if(user_brand == c[i].brand)
          {
            item_match++;
            cout << item_match << ". The " << c[i].brand << " " << c[i].name << " " << c[i].type << " is available in the color " << c[i].color << "." << endl;
            search_complete = true;
          }
        }
        if(item_match == 0)
        {
          cout << "Sorry, there are no items that are made by the brand you are looking for. Please try a different brand." << endl;
        }
      }
    }
    else if (user_choice == "type" || user_choice == "Type")
    {
      while(item_match == 0)
      {
        cout << "\nWhat is the type of the clothing item you are looking for?: ";
        cin >> user_type;
        cout << "\nThe following items match that type:" << endl;
        for(int i = 0 ; i < size; i++)
        {
          if(user_type == c[i].type)
          {
            item_match++;
            cout << item_match << ". The " << c[i].brand << " " << c[i].name << " " << c[i].type << " is available in the color " << c[i].color << "." << endl;
            search_complete = true;
          }
        }
        if(item_match == 0)
        {
          cout << "Sorry, there are no items that match the type you are looking for. Please try a different type." << endl;
        }
      }
    }
    else if (user_choice == "name" || user_choice == "Name")
    {
      while(item_match == 0)
      {
        cout << "\nWhat is the name of the clothing item you are looking for?: ";
        getline(cin,user_name);
        cout << "\nThe following items match that name:" << endl;
        for(int i = 0 ; i < size; i++)
        {
          if(user_name == c[i].name)
          {
            item_match++;
            cout << item_match << ". The " << c[i].brand << " " << c[i].name << " " << c[i].type << " is available in the color " << c[i].color << "." << endl;
            search_complete = true;
          }
        }
        if(item_match == 0)
        {
          cout << "Sorry, there are no items that match the name you are looking for. Please try a different name." << endl;
        }
      }
    }
    else if (user_choice == "pattern" || user_choice == "Pattern")
    {
      cout << "\nDo you want a clothing item with a pattern?\nType yes or no: ";
      cin >> yes_no;
      cin.ignore();
      if(yes_no == "yes" || yes_no == "Yes")
      {
        while(item_match == 0)
      {
        cout << "\nWhat is the pattern of the clothing item you are looking for?: ";
        getline(cin,user_pattern);
        cout << "\nThe following items match that pattern:" << endl;
        for(int i = 0 ; i < size; i++)
        {
          if(user_pattern == c[i].pattern)
          {
            item_match++;
            cout << item_match << ". The " << c[i].brand << " " << c[i].name << " " << c[i].type << " is available in the color " << c[i].color << " and the pattern " << c[i].pattern << "." << endl;
            search_complete = true;
          }
        }
        if(item_match == 0)
        {
          cout << "Sorry, there are no items that match the name you are looking for. Please try a different pattern." << endl;
        }
      }
      }
      else 
      {
        user_pattern = "none";
        cout << "\nThe following items have no pattern:" << endl;
        for(int i = 0 ; i < size; i++)
        {
          if(user_pattern == c[i].pattern)
          {
            item_match++;
            cout << item_match << ". The " << c[i].brand << " " << c[i].name << " " << c[i].type << " is available in the color " << c[i].color << "." << endl;
            search_complete = true;
          }
        }
      }
    }
    else 
    {
      cout << "Input invalid. Enter a valid option" << endl;
      search_complete = false;
    }
  }
}

void create_element(Clothes& new_item)
{
  string is_sale, available_xsmall, available_small, available_medium, available_large, available_xlarge, is_pattern;
  cout << "\nYou will be creating a new clothing item for our store." << endl;
  cout << "\nWhat is the price of the item?: $";
  cin >> new_item.price;
  cout << "\nIs the item on sale?\nType yes or no: ";
  cin >> is_sale;
  cin.ignore();
  if(is_sale == "yes" || is_sale == "Yes")
  {
    new_item.sale = true;
  }
  else 
  {
    new_item.sale = false;
  }
  if(new_item.sale == true)
  {
  cout << "\nWhat was the original price of the item?: $";
  cin >> new_item.original_price;
  cin.ignore();
  }
  else 
  {
    new_item.original_price = new_item.price;
  }
  cout << "\nWhat is the type of clothing item?: ";
  getline(cin,new_item.type);
  cout << "\nWhat is the brand of the clothing item?: ";
  getline(cin,new_item.brand);
  cout << "\nWhat is the name of the clothing item?: ";
  getline(cin, new_item.name);
  cout << "\nWhat is the color of the clothing item?: ";
  getline(cin, new_item.color);
  cout << "\nDoes the clothing item have a printed pattern?\nType yes or no: ";
  cin >> is_pattern;
  cin.ignore();
  if(is_pattern == "Yes" || is_pattern == "yes")
  {
    cout << "\nWhat is the pattern?: ";
    getline(cin, new_item.pattern);
  }
  else 
  {
    new_item.pattern = "none";
  }
  cout << "\nWhat sizes are available?\nAfter each size displayed, type yes if it is available or no if it is not available.";
  cout << "\nXSmall: ";
  cin >> available_xsmall;
  if(available_xsmall == "yes" || available_xsmall == "Yes")
  {
    new_item.xsmall = true;
  }
  else 
  {
    new_item.xsmall = false;
  }
  cout << "\nSmall: ";
  cin >> available_small;
  if(available_small == "yes" || available_small == "Yes")
  {
    new_item.small = true;
  }
  else 
  {
    new_item.small = false;
  }
  cout << "\nMedium: ";
  cin >> available_medium;
  if(available_medium == "yes" || available_medium == "Yes")
  {
    new_item.medium = true;
  }
  else 
  {
    new_item.medium = false;
  }
  cout << "\nLarge: ";
  cin >> available_large;
  if(available_large == "yes" || available_large == "Yes")
  {
    new_item.large = true;
  }
  else 
  {
    new_item.large = false;
  }
  cout << "\nXLarge: ";
  cin >> available_xlarge;
  if(available_xlarge == "yes" || available_xlarge == "Yes")
  {
    new_item.xlarge = true;
  }
  else
  {
    new_item.xlarge = false;
  }
  cout << "\nWhat is the eight-digit stock keeping unit?: ";
  cin >> new_item.sku_num;
  cout << "\nWhat is the three-digit color code?: ";
  cin >> new_item.color_code;
  cout << "\nOut of five, how many stars in ratings does this item have?: ";
  cin >> new_item.rating;
  cout << "\nHow many reviews does this item have?: ";
  cin >> new_item.num_reviews;
}
void add_element(Clothes c[], int& size, Clothes new_item)
{
  int position = 0;
  while ( new_item.price > c[position].price && position < size) {
    position++; 
  }
  cout << position;
  for (int index = size; index > position; index--) {
    c[index] = c[index - 1];
  }
  c[position] = new_item;
  size++;
}

void remove_element(Clothes c[], int& size)
{
  long int discard;
  int index;
  cout << "\nYou will be deciding which clothing item to remove from our store." << endl;
  do
  {
    do
    {
    index=0;
    cout << "\nEnter the eight-digit stock keeping unit of the clothing item you would like to remove: ";
    cin >> discard;
    if(discard < 10000000 || discard > 100000000) 
    {
      cout << "Sorry, the stock keeping unit you entered does not exist. Please try entering a new one." << endl;
    }
    }while(discard < 10000000 || discard > 100000000);
    while(c[index].sku_num != discard && index <= size)
    {
      index++;
    }
    if(index > size)
    {
      cout << "Sorry, the stock keeping unit you entered does not exist. Please try entering a new one." << endl;
    }
  
  }while(index > size);

  while(index < size)
  {
    c[index] = c[index + 1];
    index++;
  }
  c[index].price = -1;
  c[index].sale = -1;
  c[index].original_price = -1;
  c[index].type = "";
  c[index].brand = "";
  c[index].name = "";
  c[index].color = "";
  c[index].pattern = "";
  c[index].xsmall = -1;
  c[index].small = -1;
  c[index].medium = -1;
  c[index].large = -1;
  c[index].xlarge = -1;
  c[index].sku_num = -1;
  c[index].color_code = "";
  c[index].rating = -1;
  c[index].num_reviews = -1;
  size--;
}

void collect_data(Clothes c[], int& size)
{
  ifstream infile("input.dat");
  if (!infile.is_open())
  {
    cout<< "The file cannot be opened." << endl;
    
  }
  while(!infile.eof())
  {
    infile >> c[size].price;
    infile.ignore();
    infile >> c[size].sale;
    infile.ignore();
    infile >> c[size].original_price;
    infile.ignore();
    getline(infile,c[size].type,',');
    getline(infile,c[size].brand,',');
    getline(infile, c[size].name,',');
    getline(infile, c[size].color,',');
    getline(infile, c[size].pattern,',');
    infile >> c[size].xsmall;
    infile.ignore();
    infile >> c[size].small;
    infile.ignore();
    infile >> c[size].medium;
    infile.ignore();
    infile >> c[size].large;
    infile.ignore();
    infile >> c[size].xlarge;
    infile.ignore();
    infile >> c[size].sku_num;
    infile.ignore();
    getline(infile,c[size].color_code,',');
    infile >> c[size].rating;
    infile.ignore();
    infile >> c[size].num_reviews;
    infile.ignore();
    size++;
  }
  infile.close();
}