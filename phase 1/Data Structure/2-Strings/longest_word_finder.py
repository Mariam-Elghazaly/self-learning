''' Write a C program that reads a full sentence (up to 1000 characters) from the user and prints the longest word in the sentence along with its length.

A word is defined as a continuous sequence of alphabetical characters (ignore punctuation and digits).'''

length=0

sentence=input("Enter a sentence: ")
sentence=sentence.split(" ")
for word in sentence:
      clean_word = ''.join(char for char in word if char.isalpha())
      if len(clean_word) > length:
          length = len(clean_word)
          longest_word = clean_word
print(f'The longest word is "{longest_word}" with length of {length}')