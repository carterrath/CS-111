#Create a program that will ask the user for a sentence. Store it into a variable. 
def sentence_letter(sentence, letter):
  letter_count = sentence.count(letter)
  first_letter = sentence.find(letter)
  last_letter = sentence.rfind(letter)
  print("The number of times", letter, "appears is",letter_count) 
  print(letter, "first appers at index", first_letter)
  print(letter, "last appears at index", last_letter)
sentence_input = input("Enter a sentence: ") 
letter_input = input("Enter a letter: ")
sentence_letter(sentence_input, letter_input)
#figure out thenumber of times the user-inputted letter appears in the sentence. count 
#find out where the first and last occurrence of that letter is. find, rfind You MUST create a function that accepts both the sentence and the letter as input parameters and finds all ofthe above information. You should NOT ask for user input inthe function. You can output in the function.
#Enter a sentence: Easy Buddy 
#Enter a letter: y
#The number of times y appears is 2
#y first appears at index 3
#y last appears at index 9