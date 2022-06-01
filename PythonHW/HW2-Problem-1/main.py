#Name: Carter Rath
#Section: CS 111 (30)
def print_knock_knock(name, punch_line):
  print("Knock-knock")
  print ("Who's there?")
  print(name)
  print(name, "who?")
  print(punch_line)

def calculate_tax(unit_cost, quantity):
  tax_rate = 0.078
  sub_total = unit_cost * quantity
  tax = tax_rate * sub_total
  return tax

#Main Program.
#Use the following space to include your code.
#Do not alter the function definitions
name = input("What would you use to answer who's there? ")
punch_line = input("What would you use for the punchline? ")
print_knock_knock(name, punch_line)
print()
user_cost = float(input("What is the unit cost? "))
user_quantity = float(input("How many would you like? "))
print(calculate_tax(user_cost, user_quantity))
