class Person:
    def __init__(self,name,age):
        #self is a parameter(used to access the variables that belong to the class),name and age are variables
        self.name = name #*Method, firstname => property
        self.age = age   #*Method
    def myFunc(self):
        print("My name is "+ self.name)
p1 = Person("Shantanu", 19)
p2 = Person("Vaishali", 45)
p2.myFunc()