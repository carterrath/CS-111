cents = 89
quarter = 25
dime = 10
nickel = 5
penny = 1
number_of_quarters = cents // quarter
cents = cents % quarter
number_of_dimes = cents // dime
cents = cents % dime
number_of_nickels = cents // nickel
cents = cents % nickel
number_of_pennies = cents // penny
print (number_of_quarters, "quarters")
print (number_of_dimes, "dime")
print (number_of_nickels, "nickels")
print (number_of_pennies, "pennies")