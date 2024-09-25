class Company:
    def __init__(self, name, id) -> None:
        self.name = name
        self.id = id

    def display(self):
        print("Employee Name:", self.name, "and", "Employee Id:", self.id)

class Department:
    def __init__(self, department_name) -> None:
        self.department_name = department_name

    def display_department(self):
        print("Department:", self.department_name)

class Employee(Company, Department):
    def __init__(self, name, id, department_name) -> None:
        Company.__init__(self, name, id) 
        Department.__init__(self, department_name)  


obj = Employee("Gray", 23143, "Sales")
obj.display()         
obj.display_department() 
