Project Report:
describe the features you have been able to accomplish with the project. For each feature, copy and paste a sample run to illustrate how it works.
For my project, my program reads data from an online clothing store named Urban Outifitters and sorts the data into an array. The user is presented with a menu of 6 lettered choices to chose from:
1. First choice: 'A'
  -This choice calls the summary function.
  -The function first displays all of the clothing items available onto the screen for the user. It is organized by lowest price to highest price and the data types of the struct are seperated by titled columns so that the user can easily read and locate items.
  -Following the list, the program displays a summary of eight statistics: the number of clothing items, the lowest and highest priced item, the average price of an item, the top rated item, the item with the most reviews, the number of items made by Urban Outfitters, the number of items on sale, and the number of items that have a printed pattern.
2. Second choice: 'B'
  -This choice calls the price_determination function.
  -The function prompts the user to enter an amount of money that they are willing to spend on an item. After the user enters their amount, the items that they can afford is displayed on the screen in a numbered list.
  -If the user enters an amount that is too low to buy anything, the program informs the user and prompts them to enter a new amount.
  -The user also has an option of entering -1 if they want to end the loop and choose a different choice from the menu.
  -Example input for a price that is too low: 
    user_budget = 10
  -Example input for a price that is high enough to display items:
    user_budget = 90
  -Example to stop the loop:
    user_budget = -1
3. Third choice: 'C'
  -This choice calls the item_find function
  -This function first asks the user if they want to search for a clothing item by color, brand, type, name, or pattern. If the user chooses an invalid option, the loop alerts the user what they did and asks them to enter a new response.
  - Once the user enters a valid option, it asks the user to specify what kind of clothing item from the choice they entered.
  -The program then displays the clothing items that match what the user is looking for.
  -If the user enters something that cannot be applied to any of the clothing items, the program alerts the user and asks them to enter a new response.
  -Example for color:
    user_color = "pink"
  -Example for brand:
    user_brand = "Love & Lemons"
  -Example for type:
    user_type = "dress"
  -Example for name:
    user_name = "Smitten Peplum"
  -Example for pattern:
    yes_no = "yes"
    user_pattern = "leopard"
  -Example for non-pattern:
    yes_no = "no"
    user_pattern = "none
  4. Fourth choice: 'D'
  -This choice calls the create_element and add_element function
  -The create_element function prompts the user for input on the data members required for the struct in order for them to create a new clothing item.
  -The program takes the user's input into a struct variable seperate from the array.
  -Example to insert an element at the beginning of the array:
    new_item.price = 15
    is_sale = "yes"
    new_item.sale = true
    new_item.original_price = 80
    new_item.type = "dress"
    new_item.brand = "Brandy Melville"
    new_item.name = "Mallory Cowl"
    new_item.color = "pink"
    is_pattern = "no"
    new_item.pattern = "none"
    available_xsmall = "yes" 
    available_small = "no"
    available_medium = "Yes"
    available_large = "No"
    available_xlarge = "yes"
    new_item.xsmall = true
    new_item.small = false
    new_item.medium = true
    new_item.large = false
    new_item.xlarge = true
    new_item.sku_num = 87654321
    new_item.color_code = "077"
    new_item.rating = 4.9
    new_item.num_reviews = 7654
  -Example to insert an element in the middle of the array:
    new_item.price = 100
    is_sale = "no"
    new_item.sale = false
    new_item.original_price = 100
    new_item.type = "dress"
    new_item.brand = "Brandy Melville"
    new_item.name = "Mallory Cowl"
    new_item.color = "pink"
    is_pattern = "Yes"
    new_item.pattern = "cheetah print"
    available_xsmall = "yes" 
    available_small = "no"
    available_medium = "Yes"
    available_large = "No"
    available_xlarge = "yes"
    new_item.xsmall = true
    new_item.small = false
    new_item.medium = true
    new_item.large = false
    new_item.xlarge = true
    new_item.sku_num = 87654321
    new_item.color_code = "077"
    new_item.rating = 4.9
    new_item.num_reviews = 7654
  -Example to insert an element at the end of the array:
    new_item.price = 1000
    is_sale = "no"
    new_item.sale = false
    new_item.original_price = 1000
    new_item.type = "dress"
    new_item.brand = "Brandy Melville"
    new_item.name = "Mallory Cowl"
    new_item.color = "pink"
    is_pattern = "yes"
    new_item.pattern = "cheetah print"
    available_xsmall = "yes" 
    available_small = "no"
    available_medium = "Yes"
    available_large = "No"
    available_xlarge = "yes"
    new_item.xsmall = true
    new_item.small = false
    new_item.medium = true
    new_item.large = false
    new_item.xlarge = true
    new_item.sku_num = 87654321
    new_item.color_code = "077"
    new_item.rating = 4.9
    new_item.num_reviews = 7654
  -The add_element then inserts the new clothing item into the array depending on its price.
  5. Fifth choice: 'E'
  -This choice calls the function remove_element
  -This function asks the user for the eight-digit stock keeping unit of the item that they would like to remove. If they enter an invalid number, it alerts the user and asks them to try again.
  -Example remove an element from the beginning of the array:
    discard = 51159661
  -Example remove an element from the middle of the array:
    discard = 58358094
  -Example remove an element from the end of the array:
    discard = 58197741
  6. Sixth choice: 'F'
  -This choice calls no functions and stops the loop of displying the menu to the user.






Progress Update #2:
*I have all my function calls for the menu in the "determine_action" function. The main program calls the "collect_data" function that reads the input file and then calls "get_choice" and "determine_action" on a loop until the user chooses "F" or "f" to stop the loop* I have not changed anything from the last progress update I have only created the three required functions for the requirements for the progress update 2. The "create_element" function asks the user for questions that will fill each data type for a "new_item struct. The example answers I used to test the function are these:
new_item.price = 40
is_sale = yes
new_item.sale = true
new_item.original_price = 80
new_item.type = dress
new_item.brand = Brandy Melville
new_item.name = Mallory Cowl
new_item.color = pink
new_item.pattern = cheetah print
available_xsmall = yes 
available_small = no
available_medium = Yes
available_large = No
available_xlarge = yes
new_item.xsmall = true
new_item.small = false
new_item.medium = true
new_item.large = false
new_item.xlarge = true
new_item.sku_num = 87654321
new_item.color_code = 777
new_item.rating = 4.9
new_item.num_reviews = 7654
I then created an "add_element" function to add the new_item struct to the array. when the user picks choice "D" or "d," it first calls "create_element" and then it calls "add_element" to add it in the correct spot depending on it's cost. (The array is in order from lowest price to highest price). Then, I created a "remove_element" function and when the user chooses choice "E" or "e," the program calls the function. The "remove_element" function asks the user for the eight-digit sku number of the item they want to be deleted. Then it searches the array for the item with that number and deletes it. After each time I tested the add element and remove element choice, I used the summary choice to make sure the element was added/removed correctly.


Progress Update #1:
I decided to change the clothing store website to "Urban Outfitters" because they provide a lot more information to choose from about their clothes.
https://www.urbanoutfitters.com/
1. In the "input.dat" file, I sorted the        
clothing items in order from lowest price to highest price. For each clothing item, I listed in the following order: the price, if it was on sale, the amount taken off by the sale (if it's not on sale, I put a zero), the type, the style, the brand, the name, the color, the pattern, the fit, the material,the sizes, the stock keeping unit, the color code,if its top rated, the rating, and the amount of reviews
2. I created a function called "collect_data" that successfully read the file and placed the data in the correct struct 
elements. I also created a function called "summary" that listed the elements in column format. There are a lot of columns because I have a lot of struct members, so it is important to expand the output screen as much as you can in order for everything to line up correctly. After the function lists the elements, it also provides a summary. The summary evaluates 8 things: The number of clothing items in total, the lowest and highest priced clothing item, the average price of a clothing item, the top rated clothing item, the item with the most reviews, the number of items made by Urban Outfitters, the number of items on sale, and the number of items with a pattern. My main program calls the "collect_data" function before displaying the menu to the user. Then, I added 2 paramters to my "determine_action" function. These two parameters are an array of struct and its companion variable keeping track of the number of elements in the array. I added these so I can call the summary function for when the user chooses 'A' or 'a' from the menu.


Project Proposal:
I plan to work with data from an online clothing store. On the website, "Brandy Meliville," their clothes are identified by the following traits: the price, color, name, type, pattern, available sizes, their stock keeping unit, and the country it was made in. I included all of those with their respected data type in the struct data type named "Clothes."I am going to sort the array by the items' name in alphabetical order.
https://us.brandymelville.com/

A. For the summary, it will list the items from lowest price to highest price, the number of items in the file, how many are sold out, the fabric type, the number of items that are made in only one size, the number of items that come in two sizes, the average cost, the number of types of clothing, and the number of colors of clothing.

B. For the numeric data it will ask for how much money the user is planning to spend on an item and display which items that fall into the user's price range. Depending on how many items are in my data file and array, the program might ask the user how many items they would like to buy and how much money they are looking to spend, but I will decide when I build my program more. I was also thinking about having the user enter their measurements and will determine what size of clothing is recommended to buy.

C. For the non-numeric data, it will ask for what color,type, and style of clothing the user wants to purchase. Whatever the user enters, it will display the items that are available that have those traits. I am trying to decide if the program  should ask the user for all three traits, just one trait, or let the user decide how many traits they want to enter to narrow their search.

D. To add a new element to the array, I will simply ask the user what clothing item they would like to add to the array. The program will ask the user to enter all of the data needed for the struct.

E. To remove a new element to the array, I will simply ask the user which element they would like to remove from the array. I will display the names of the clothing items that are in the array to the user so they can decide what they would like to remove.

F. to stop loop