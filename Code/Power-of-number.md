---
Name: 'Pratibha Singh'
Github: 'https://github.com/Crazy2code15'
WebSite: 
Problem: 'Power-of-number'
Description: 'Find Power of a number.'
Explanation: 'Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.'
Language: 'Python' 
---

```py
def powerof(a, b):
    results = 1
    for n in range(b):
        results *= a
    return results

a, b = input().split()
a = int(a)
b = int(b)
print(powerof(a,b))
```
