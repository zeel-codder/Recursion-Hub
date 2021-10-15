---
Name: 'Samuele Bella'
Github: 'https://github.com/Novaenn'
WebSite: ''
Problem: 'Check Prime Number'
Description: 'Checks if the inserted number is prime.'
Explanation : We check for every factor from 2 to the number and if num % i is equal zero then i is a factor of num. If we cant find any factor the number will be prime.
Language: 'python' 
---
```python

num = int(input("Enter a number: "))

# prime numbers are greater than 1
if num > 1:
   # check for factors
   for i in range(2,num):
       if (num % i) == 0:
           print(num," is not a prime number")
           print(i," times ",num//i," is ",num)
           break
   else:
       print(num," is a prime number")
       
else:
   print(num," is not a prime number")
