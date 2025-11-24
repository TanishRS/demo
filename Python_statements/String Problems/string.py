s = input("Enter a string: ")

vowels = 0
consonants = 0
digits = 0
spaces = 0

for char in s:
    if char.isdigit():
        digits += 1
    elif char == " ":
        spaces += 1
    elif char.isalpha():
        if char.lower() in "aeiou":
            vowels += 1
        else:
            consonants += 1

print("Vowels:", vowels)
print("Consonants:", consonants)
print("Digits:", digits)
print("Spaces:", spaces)