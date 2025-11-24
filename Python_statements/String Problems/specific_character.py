x=input("Enter a string: ")
y=input("Enter a letter to count: ")
count=0

for char in x:
    if char == y:
        count +=1

print("The character", y,"appears", count, "times in the above given string." )