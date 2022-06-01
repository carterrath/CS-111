#Name: Carter Rath
#Section: CS 111 (30)

#define the print_madlibs function here
def print_madlibs(noun, adjective):
  print(noun, "are a staple of any", adjective, "summer wardrobe.")

#define the calculate_area function here
def calculate_area(base, height):
  area = base * height/2
  return area
  
#Main Program.
print("Are you ready for a madlibs game?")
noun = input("Give me a noun: ")
adjective = input("Now an adjective: ")
print_madlibs(noun, adjective)
print()
print("We will help you calculate the area of a triangle")
base_input = input("Enter the measurement for base ")
base = int(base_input)
height_input = input("Enter the measure for height ")
height = int(height_input)
result = calculate_area(base, height)
print("The area is", result)