from abc import ABC, abstractmethod
class Human(ABC):
    @abstractmethod
    def talk():
        print("talking..")

class Man(Human):
    def walk(self):
        print('walking')

person=Man()
person.walk()