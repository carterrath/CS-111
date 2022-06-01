#For today’s lab, we will alter the function in lab 5 to return the index of the first occurrence of the letter the user inputted. After it has been returned, store the index into some variable.
#Now, create a new function that will accept the user-inputted sentence and the index of the first occurrence as parameters. In this new function, you must use this index to splice the sentence into two pieces. In addition, it should combine them such that the second part of the sentence appears first. Return the new sentence and output it outside of the new function.
#Sample Output
#Enter a sentence: Easy Buddy
#Enter a letter: y
#The number of times y appears is 2
#y first appears at index 3
#y last appears at index 9
#The new sentence is : y BuddyEas
def sentence_letter(sentence, letter):
  letter_count = sentence.count(letter)
  first_letter = sentence.find(letter)
  last_letter = sentence.rfind(letter)
  print("The number of times", letter, "appears is",letter_count) 
  print(letter, "first appers at index", first_letter)
  print(letter, "last appears at index", last_letter)
  return first_letter
def splice(sentence, letter_index):
  first_part = sentence[:letter_index]
  second_part = sentence[letter_index:]
  sentence_modified = second_part + first_part
  return sentence_modified
sentence_input = input("Enter a sentence: ") 
letter_input = input("Enter a letter: ")
letter_index = sentence_letter(sentence_input, letter_input)
print (splice(sentence_input, letter_index))
