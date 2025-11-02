class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Student(Person):
    def __init__(self, name, age, rollno, stream):
        super().__init__(name, age)
        self.rollno = rollno
        self.stream = stream

    def display(self):
        print("Name:", self.name)
        print("Age:", self.age)
        print("Roll No:", self.rollno)
        print("Stream:", self.stream)

student1 = Student("Rahul Sharma", 18, 101, "Science")
student1.display()
