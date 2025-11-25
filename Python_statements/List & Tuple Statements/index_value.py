my_tuple=(1,2,3,4,5,6,7,8,9,10)
user_input=int(input("Enter the value to find the index: "))

if user_input in my_tuple:
    for x in list(my_tuple):
        if x == user_input:
            index = list(my_tuple).index(x)
        print(index)

else:
    print("Input number doesn't exists.")