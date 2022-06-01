#Name: Carter Rath
#Section: CS 111 (30)
#Replace the function body with appropriate statements
def registration_group(ISBN):
  first_number = ISBN.find("-") + 1
  second_hyphen = ISBN.find("-", first_number)
  registration_index = ISBN[first_number:second_hyphen]
  return registration_index
'''
  One assert statement has been provided for the function.
  Search up the ISBN of your favorite books and provide two additional assert statements to demonstrate your understanding of the expected behavior of the function. The ISBNs your use for the assert statements may not use 2 digits for their registration group.
'''
assert registration_group("978-92-95055-02-5") == "92"
print("Test case passed for 978-92-95055-02-5")
assert registration_group("978-0150-61120-08-4") == "0150"
print("Test case passed for 978-0150-61120-08-4")
assert registration_group("978-011-42000-67-0") == "011"
print("Test case passed for 978-011-42000-67-0")
print()
'''
  Once your function passes the above test cases, add
  more statements below to prompt for and collec
  user input for a valid ISBN and display the
  registration group of the ISBN entered by the user.
'''
ISBN_input = input("What is the ISBN number of your book? ")
print("The registration group number is:", registration_group(ISBN_input))