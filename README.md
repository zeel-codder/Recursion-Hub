# Hacktoberfest2021 Recursion Hub

Write the solution of any **recursive problem** in any language of your choice. You Don't Need to write an optimal solution just write code with help of Recursion. 

<img src="./static/Hacktoberfest2021.png" width=300 height=300 style="margin:0 auto;" alt="none">

# Maker sure to flow instruction bellowed.

#### 1. Fork and clone this repository.

#### 2. Create new branch with your name ([Find more details](https://github.com/firstcontributions/first-contributions))

#### 3. Select any problem which can solve by recursion. Make sure your problem is not present in the list below.

#### 4. select any programing language of your choice. and write code to solve the problem(Make sure file name explain the problem in brief). and add the problem in list.
#### 5. In Code make sure to add two sections in the comment.
1. Contributor Introduction
```java
/**
* Contributor🎅
* Name: Your Github Name
* Github: Your Github Url 
* WebSite(optional): Your Personal Website Url
*/
```
2. About Problem 
```java
/**
* 👉 Problem: Nth FibonacciNumber
* 👑 Description: Find the Nth Fibonacci Number.
* 🎓 Explanation(optional):Any fibonacci number is give by sum of last two fibonacci number
*    before the number.
*    Ex. 
*    F(N):  0 1 1 2 3 5 8 13 21...
*    N   :  0 1 2 3 4 5 6  7  8....
*    f(n)= {
*               0 for  n==0
*               1 for n==1
*               f(n-1)+f(n-2) otherwise
*          }        
*/
```
[Hole Code](./Code/FibonacciNumber.java)

3. Stobogrammatic Number
  --java
  /**
* 👉 Problem: Count frequency of Stobogrammatic Number in given range.
* 👑 Description: Find thefrequencies and print it.
* 🎓 Explanation(optional):Strobogrammatic Number is a number whose numeral is rotationally symmetric so that it appears the same when rotated 180 degrees.
*  In other words, Strobogrammatic Number appears the same right-side up and upside down.
*    Ex. 
*    6 after 180° rotation : (6 → 9)
     9 after 180° rotation : (9 → 6)
     therefore 69 ,00,88,11, such are the numbers.
*    init={{"0","0"},{"1","1"},{"8","8"},{"6","9"},{"9","6"}}
*    dfs(int i,int left,char [] no,long l0w,long high,int [] c){
   for(char[] in:init){             
   no[left]=in[0];
   no[i-1-left]=in[1];
   dfs(i,left+1,no,l,h,c);        
*/
```

#### 6. Add problem name in the list given below and make sure two problems are not the same


# List 

- [x] [NthFibonacciNumber](./Code/FibonacciNumber.java)

# Rules

1. Try to add some value and don't spam
2. Just follow the instructions given above and you are good to go.


# Thanks You
