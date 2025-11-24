x=input("Enter a string: ")
y=x.split()
z=""

for word in y:
    if len(word) > len(z):
        z=word

print("The longest word is", z)