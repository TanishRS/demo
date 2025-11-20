user_input = input("Enter your Username: ")
user_password = input("Enter your password: ")


class User:
    def __init__(self, username, password):
        self.username = username
        self.__password = password

    def get_password(self):
        return self.__password
    
class Auth(User):
    def __init__(self, username, password):
        super().__init__(username,password)

    def login(self, username, password):
        if username == self.username and password == user_password:
            return True
        return False

    def reg():
        pass 

obj = Auth('prasad','123')
print(obj.login(user_input,user_password))