---
Name: 'Abhishek AB'
Github: 'https://github.com/kehshiba'
Problem: 'QuickSort in Python'
Description: 'Recursive method - QuickSort'
Language: 'Python'
---

```python
def Quicksort(a, l, r):
  current = l+1
  if r <= current:
    return None
  for i in range(l+1, r):
    if a[l] >= a[i]:
      a[i], a[current] = a[current], a[i]
      current += 1
  a[l], a[current-1] = a[current-1], a[l]
  Quicksort(a, l, current-1)

  Quicksort(a, current, r) 
  return None

a = [5,6,4,12,9,2,1,7,6,3]
print('Before sorting...')
print(a)
Quicksort(a, 0, len(a))
print('\nAfter sorting...')
print(a)


```
