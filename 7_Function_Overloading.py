class Calculator:
    def sum(self,num1,num2,num3=None):
       if num3 is None:
           return num1+num2
       return num1+num2+num3
    def sub(self,num1,num2,num3=None):
        if num3 is None:
           return num1-num2
        return num1-num2-num3
    
    
cal = Calculator()
print(cal.sum(12,2,3))
print(cal.sum(1,5))
print(cal.sum(10,5,2))
print(cal.sum(12,2))