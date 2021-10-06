---
Name: 'Harsh-Oza'
Github: 'https://github.com/HarshOza36'
WebSite: 'http://harshoza.herokuapp.com/'
Problem: 'Source to Destination'
Description: 'Given 2D matrix with a source and destination, you have two moves down and right. Find total number of ways to reach from source to destination.'
Language: 'python' 
---
```python
visited = {}
def safe_to_go(a,b,m,n):
    if((a,b) in visited):
        if(a>=0 and a<m and b>=0 and b<n and visited[(a,b)] == False):
            return True
        else:
            return False
    elif(a>=0 and a<m and b>=0 and b<n): # (a,b) not in visited
            return True
    else:
        return False
    
def source_to_dest(m,n,src,dest,output):
    src_x, src_y = src
    visited[src] = True

    # Base condition
    if(src == dest):
        print("".join(output))
        visited[src] = False
        return
   
    # Down
    if(safe_to_go(src_x+1,src_y,m,n)):
        output.append("D")
       
        source_to_dest(m,n,(src_x+1,src_y),dest,output)
        output.pop()
       
    # Right
    if(safe_to_go(src_x,src_y+1,m,n)):
        output.append("R")
        source_to_dest(m,n,(src_x,src_y+1),dest,output)
        output.pop()
        
    visited[src] = False
    
m = 4
n = 4
src = (0,0)
dest = (2,3)
print(source_to_dest(m,n,src,dest,[]))
```

