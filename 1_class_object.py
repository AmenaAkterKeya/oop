class classObject:

    def __init__(self) -> None:
        print("Constructor")
    
    def display(self):
        print("Method")

    def __del__(self):
        print("Destructor")

    def __str__(self) -> str:
        return "Class"

obj = classObject()
obj.display()
print(obj)

