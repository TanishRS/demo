print("ChatBot: Hello! Type to chat with me. Type 'stop' or 'STOP' to end.")

while True:
    user = input("You: ")
    if user.lower() == "stop" and user.upper() == "STOP":
        print("ChatBot: Bye!")
        break
    else:
        print("ChatBot: Wow!")