class Employee:
    id = 5212
    def __init__(self,name,salary) -> None:
        self.name = name
        self.salary = salary
    def display(self):
        print(f"Employee id: {Employee.id} , Employee: {self.name} salary: {self.salary}") 
obj = Employee("John's", 50000)
obj.display()



