---
Name: 'Zeel-Codder'
Github: 'https://github.com/zeel-codder'
WebSite: 'https://zeelcodder.tech/'
Problem: 'Nth FibonacciNumber'
Description: 'Find the Nth Fibonacci Number.'
Language: 'java' 
---
```java

/**
Any fibonacci number is give by sum of last two fibonacci number before the number. 
Ex. 
F(N): 0 1 1 2 3 5 8 13 21... 
N : 0 1 2 3 4 5 6 7 8.... 
f(n)={ 0 for n==0 
       1 for n==1 
       f(n-1)+f(n-2) otherwise
      }
*/
public class FibonacciNumber {

    // Main Function
    
    public static void main(String[] args) {
       int f=NthFibonacciNumber(5);
       System.out.println(f);

    }

    // find Nth FibonacciNumber

    static int NthFibonacciNumber(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        
        //Recursive Call
        return NthFibonacciNumber(n-1)+NthFibonacciNumber(n-2);
    }
}
```


```language-name
    //Your Code
```
