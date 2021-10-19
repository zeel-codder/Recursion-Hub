---
Name: 'Manas Vijaywargiya'  
Github: 'https://github.com/manasdevslopes'  
WebSite: ''  
Problem: 'Armstrong Numbers'  
Description: 'Recursive method for Armstrong Numbers in Python'  
Language: 'Python' 
---
```
sum=0
def check_ArmstrongNumber(num):
    global sum
    if (num!=0):
        sum+=pow(num%10,3)
        check_ArmstrongNumber(num//10)
    return sum
num=int(input("Enter a number:"))
if (check_ArmstrongNumber(num) == num):
    print("It is an Armstrong Number.")
else:
    print("It is not an Armstrong Number.")
    
```


