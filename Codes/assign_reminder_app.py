print("Assignment Reminder App")
print("Type 'done' once you have submitted your assignment.")

while True:
    user=input("Have you submitted your assignment? ")
    
    if user == "done":
        print("Assignment submitted successfully.")
        break
    else:
        print("Don’t forget to submit it!")