---
Name: 'Sockalingam'
Github: 'https://github.com/sakshamian'
WebSite: ''
Problem: 'Palindrome Check. '
Description: 'Write a function that takes a string and returns if the string is a palindrome.'
Language: 'java'   
---
```java
import java.util.Scanner;

public class Main {

    // Main Function
    
    public static void main(String[] args) {
       Scanner in = new Scanner(System.in);
       System.out.println("Enter a string");
       String txt=in.next();
       int f=checkPalindrome(txt,0,txt.length()-1);
       if(f==1)
        System.out.println("The given string is a palindrome");
       else 
        System.out.println("The given string is not a palindrome");

    }

    static int checkPalindrome(String str,int s,int e){
       if(s==e)
        return 1;
       else if (str.charAt(s)!=str.charAt(e))
        return 0;
        else
            return checkPalindrome(str,++s,--e);
    }
}

```