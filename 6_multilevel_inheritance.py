class School:
    def __init__(self, name) -> None:
        self.name = name

class Class(School):
    def __init__(self, name, cls) -> None:
        super().__init__(name) 
        self.cls = cls

class Student(Class):
    def __init__(self, name, cls, std_name) -> None:
        super().__init__(name, cls)  
        self.std_name = std_name


my_student = Student("Redford High", "10A", "Alice")


print(f"School Name: {my_student.name}")
print(f"Class: {my_student.cls}")
print(f"Student Name: {my_student.std_name}")
