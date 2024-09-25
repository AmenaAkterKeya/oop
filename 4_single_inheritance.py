class Company:
    def __init__(self,name,id) -> None:
        self.name = name
        self.id = id
    def display(self):
        print("Employee Name:", self.name ,"and" ,"Employee Id:", self.id )



class Employee(Company):
    def __init__(self, name,id,designation) -> None:
        super().__init__(name,id)
        self.designation = designation

    def display(self):
        super().display()
        print("Designation:", self.designation)
obj = Employee("Gray",23143,"Manager")
obj.display()