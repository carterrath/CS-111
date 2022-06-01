#Create a program that has the user enter an integer and
#determines whether it is even or odd. Your program must 
#use a function called is_even 
#that takes the number as a parameter and
#returns true (for even) or false (for odd). 
#The is_even function should NOT call input() or print() and 
#MUST be in a separate library file.
#Hint: Remember modulus %
#Note: Zero is even.
from library import is_even
integer_input = input("Enter an integer: ")
integer = int(integer_input)
result = is_even(integer)
print("Is your integer is even?", result)
