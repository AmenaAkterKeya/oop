class Employee:
    __id = 5212
    def __init__(self,name,salary) -> None:
        self.name = name
        self.salary = salary
    def display_id(self):
        print(Employee.__id)  

    def display(self):
        print(f"{self.name} salary {self.salary}") 
obj = Employee("John's", 50000)
obj.display()
obj.__id = 10
print(obj.__id)


