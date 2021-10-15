---
Name: 'Shivam Jindal'
Github: 'https://github.com/Shivamjindal1'
WebSite: 'https://shivamjindal1.github.io/website'
Problem: 'Print Factorial of any number'
Description: 'For The Given number n print its factorial.'
Language: 'Python' 
---
```py
# Factorial of any number using python
def factorial_recursive(n):
    """
        :param n: Integer
        :return: n * n-1 * n-2 * n-3.......1
    """
    if n ==1:
        return 1
    else:
        return n * factorial_recursive(n-1)
        
number = int(input("Enter then number"))
print(factorial_recursive(number))
```
