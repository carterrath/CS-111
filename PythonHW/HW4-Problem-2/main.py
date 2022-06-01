'''
  Replace the function body with appropriate statements.
  Hints:
    Use the find method to look for the index for '/' so that you can parse out the "M" and "D" part of each date.
    Use the int(str) function to convert "M" and "D" to their respective int values.
    Use conditional statement(s) to compare the months and days to determine what to return.
'''
def is_before(first_date, second_date):
  slash_one = first_date.find('/')
  slash_two = second_date.find('/')
  first_month = int(first_date[:slash_one])
  second_month = int(second_date[:slash_two])
  first_day = int(first_date[slash_one + 1:])
  second_day = int(second_date[slash_two + 1:])
  if first_month < second_month:
    outcome = True
  elif first_month == second_month and first_day < second_day:
    outcome = True
  else:
    outcome = False
  return outcome

input_date_one = input("Enter a date in MM/DD format: ")
input_date_two = input("Enter another date in MM/DD format: ")
result = is_before(input_date_one, input_date_two)
statement = print("Does the date", input_date_one, "come before", input_date_two, "?", result)
print()

'''
  Two assert statements have been provided below. Add two
  more assert statements to set up test cases for comparing two dates of the same month. One should have the function return True while the other should have the function return False.
'''

assert is_before("4/15", "10/1") == True
print("Test cases passed for comparing 4/15 with 10/1")
assert is_before("4/15", "1/10") == False
print("Test cases passed for comparing 4/15 with 1/10")
assert is_before("10/15", "10/31") == True
print("Test cases passed for comparing 10/15 with 10/31")
assert is_before("4/20", "4/1") == False
print("Test cases passed for comparing 4/20 with 4/1")

#You are asked to implement the is_before(first_date, second_date) function to return True when the date in the first parameter is earlier than the date in the second parameter. The function would return False otherwise.  The is_before function takes two parameters, each is a string representing a date of the "M/D" format. That is "4/15" means April 15 while "10/1" means October 1.
#For example,
#is_before("5/15", "10/1") is expected to return True since May 15 is before October 1.
#is_before("3/15", "1/10") is expected to return False since March 15 is not before January 10.