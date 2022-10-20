---
Name: 'Oleg Ataman'
Github: 'https://github.com/OlegAtaman/'
WebSite: ''
Problem: 'Recursive solution of simplified knapsack problem'
Description: 'In terminal we give our knapsack capasity after "-W" and gold bars weights after "-w". Example: "python knapsack.py -W 20 -w 4 5 7 12". Algorithm returns maximum gold weight that we can take.'
Language: 'python' 
---
```python
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-W", type=int)
parser.add_argument("-w", type=int, nargs="+")
args = parser.parse_args()

evrvar = []


def knapsack(capacity, weight, now=[]):
    weightn = sum(now)
    if weightn <= capacity:
        evrvar.append(weightn)
    for i in range(len(weight)):
        n = weight[i]
        left = weight[i+1:]
        knapsack(capacity, left, now+[n])


knapsack(args.W, args.w)
print(max(evrvar))
```