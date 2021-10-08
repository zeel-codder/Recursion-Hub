---
Name:'Kanailal Manna'
Github: 'https://github.com/KanailalManna'
Problem: 'Nth Factorial Number'
Description: 'Find the Nth Factorial Number.'
Language: 'java' 
---

```java
import java.util.*;
class Factorial{  
 public static void main(String args[]){  
  Scanner sc = new Scanner(System.in);
  int i,fact=1; 
  System.out.println("Enter a number to calculate it's Factorial value");
  int number = sc.nextInt();  
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  System.out.println("Factorial of "+number+" is: "+fact);    
 }  
}  
```
