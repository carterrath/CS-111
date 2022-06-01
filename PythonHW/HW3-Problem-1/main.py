#Name: Carter Rath
#Section: CS 111 (30)
#Replace the function body with appropriate statements
#Take first letter of English word away
#add letter to the end of the word
#add -ay
def pig_latin(word):
  first_letter = word[:1]
  word_minus_letter = word[1:]
  word_translated = word_minus_letter + first_letter + "ay"
  return word_translated
'''
  One assert statement has been provided for the function.
  You must provide two additional assert statements to
  demonstrate your understanding of the expected behavior
  of the function.
'''
assert pig_latin("soup") == "oupsay"
print("Test case passed for soup")
assert pig_latin("cat") == "atcay"
print("Test case passed for cat")
assert pig_latin("giraffe") == "iraffegay"
print("Test case passed for giraffe")
print()
'''
  Once your function passes the above test case, let's
  have some fun with the functions.
'''
word_input = input("What word would you like to translate to pig latin? ")
print(pig_latin(word_input))

#task is to to implement the pig_latin(word) function to translate an English word into a Pig Latin word.

#This function takes one parameter that is a string representing an English word starting with one consonant. The function is expected to return a string by moving the first letter of the word to the end and adding "ay" afterwards.

#For example, pig_latin("soup") is expected to return "oupsay".

#For more information about Pig Latin, check out this site: https://www.onehourtranslation.com/translation/blog/how-speak-pig-latin