---
Name: 'Saksham Negi'
Github: 'https://github.com/shelendravashishtha2'
WebSite: 'https://shelendravashishtha2.github.io/portfolio/'
Problem: 'String Creation'
Description: 'Given a string, generate all different strings that can be created using its characters in alphabetical order. '
Explanation: 'First print an integer k: the number of strings. 
Then print k lines: the strings in alphabetical order.
   Input: 
     abc
   Output: 
     6
     abc
     acb
     bac
     bca
     cab
     cba 
'  
Language: 'cpp' 
---
```java
import java.util.*;

public class Factorial {
    public static long fact(int n) {
        if (n == 1) {
            return 1;
        }
        return n * fact(n - 1);
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println(fact(s.nextInt()));
    }
}
```