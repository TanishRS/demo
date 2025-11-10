def check_number():
    num = int(input("Enter a number: "))
    if num > 0:
        return True
    elif num < 0:
        return False
    else:
        raise ValueError("Enter only positive or negative numbers.")

print(check_number())
