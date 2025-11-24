otp=23456
x=input("Enter your new username: ")
y=int(input("Enter your new passowrd: "))

a=id(x)
b=id(y)

limit=0
while limit<=2:
    limit=limit+1
    if id(x)==a and id(y)==b:
        b=int(input("Enter otp: "))
        if b==otp:
            print("Login Successful!!")
        else:
            print("Failed.")