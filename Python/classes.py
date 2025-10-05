class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    @staticmethod #used to make methods which do not take __init__ variable!
    def add(a,b):
        return a+b
    
from classes import Student as Stu

sum = Stu.add(5,6)

print(sum)