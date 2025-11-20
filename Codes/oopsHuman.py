from abc import ABC, abstractmethod
class Human(ABC):
    @abstractmethod
    def talk():
        print("talking..")

class Man(Human):
    def talk(self):
        print('hmmm')

person=Man()
person.talk()