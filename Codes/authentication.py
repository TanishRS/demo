x=input("Enter your new username: ")
y=int(input("Enter your new passowrd: "))

a=id(x)
b=id(y)

if id(x)==a and id(y)==b:
    print("You are authenticated.")
else:
    print("Wrong username or password.")