---
Name: 'Abha Barge'
Github: 'https://github.com/AbhaBarge'
WebSite: ''
Problem: 'Fibonacci series with n members'
Description: 'User inputs the number of required members, the series is printed as output, using recursion'
Language: 'python'
---
```python
def fibonacci(n, num, val=0,  prev=0):
    '''
    In the fibonacci series, the next member is the sum of the current member and its previous member"
    '''
    if(n==num):
        print(0, end=" ")
        fibonacci(n-1,num,0, 1)

    elif(n==1):
        print(val + prev)

    else:
        curr = val + prev
        print(curr, end=" ")
        fibonacci(n-1,num, curr, val)

fibonacci(23,23)

'''
Gives output as :
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711
'''
```