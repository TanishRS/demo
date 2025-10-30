# Step 1: Registration
print("----- Register -----")
username = input("Enter your new username: ")
password = input("Enter your new password: ")

print("\nAccount created successfully!\n")

# Step 2: Authentication
print("----- Login -----")
user = input("Enter your Username: ")
passw = input("Enter your Password: ")

# Step 3: Check authentication
if user == username and passw == password:
    print("✅ You are authenticated.")
else:
    print("❌ Wrong username or password.")