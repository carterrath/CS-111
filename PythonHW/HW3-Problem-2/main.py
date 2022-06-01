#Name: Carter Rath
#Section: CS 111 (30)
#Replace the function body with appropriate statements
def masking(card_number, number):
  uncovered_digits = card_number[number:]
  masked_number = "x" * number + uncovered_digits
  return masked_number
'''
  One assert statement has been provided for the function.
  You must provide two additional assert statements to
  demonstrate your understanding of the expected behavior
  of the function.
'''
assert masking("1234567898765432", 12) == "xxxxxxxxxxxx5432"
print("Test case passed for 1234567898765432")
assert masking("1234123412341234" , 8) == "xxxxxxxx12341234"
print("Test case passed for 1234123412341234")
assert masking("4321432143214321", 4) == "xxxx432143214321"
print("Test case passed for 4321432143214321")
print()
'''
  Once your function passes the above test case, we can put it
  into a good use. The first three statements prompt for and
  collect user input. Your job is to add Add statement(s)
  that will call the masking function and display the masked number
'''
credit_card = input("What is your credit card number? ")
mask_input = input("How many digits would you like to mask? ")
mask_value = int(mask_input)
result = masking(credit_card, mask_value)
print(result)

#You are asked to implement the masking(card_number, number) function to improve the privacy protection for an online store. This function takes two parameters.
#The first parameter is a string of 16 characters representing a credit card number.
#The second parameter indicates how many digits of the card number needs to be masked.
#The function is expected to return a string containing a masked card number. For example masking("1234567898765432", 12) is expected to return "xxxxxxxxxxxx5432", i.e. the first 12 digits are masked by the character 'x'.