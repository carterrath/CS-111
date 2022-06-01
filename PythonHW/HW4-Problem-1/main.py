'''
  Replace the function body with appropriate statements.
  Hints:
    Use conditional statements to determine the discount rate based on the value in days and then compute the total charge.
'''
def parking_charge(days):
  if days < 4:
    cost = days * 10.95 
    discounted_cost = cost * 0.9
  elif days >= 4 and days <= 6:
    cost = days * 10.95
    discounted_cost = cost * 0.75
  else:
    cost = days * 10.95
    discounted_cost = cost * 0.6
  return discounted_cost

assert parking_charge(1) == 9.855
print("Test case passed for 1 day")
assert parking_charge(5) == 41.0625
print("Test case passed for 5 days")
assert parking_charge(10) == 65.7
print("Test case passed for 10 days")
print()

'''
  Add to the following with appropriate statements that can call the parking_charge function to determine the parking charge based on the best coupon option. In addition, display the parking charge.
'''

days_input = int(input("How many days have you parked here?: "))
total = parking_charge(days_input)
print("You owe us $", total)

#A long-term parking lot charges $10.95 per day. The parking_charge function takes one parameter that is a number representing the number of days a customer has parked at the facility.  Your task is to implement the parking_charge(days) function to return the total charge for the customer based on the following coupon and to call this function with the number of parking days entered by the user:
#For example,
#parking_charge(1) is expected to return 9.855 because only 10% discount can be applied for less than 4 days.
#parking_charge(5) is expected to return 41.0625 because 25% discount should be applied for parking of 4 - 6 days.
#parking_charge(10) is expected to return 65.7 because 40% discount should be applied for parking of 7 and more days.