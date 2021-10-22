---
Name: 'Manju Thakur'
Github: 'https://github.com/mthakur7'
Problem: 'print KPC'
Description: 'To print the list of all KPC'  
Language: 'java'
---
```java
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
Scanner scn=new Scanner(System.in);
String str=scn.next();
printKPC(str,"");
    }
static String[] codes={".;","abc","def","ghi","jkl","mno","pqrs","tu","vwx","yz"};
    public static void printKPC(String str, String asf) {
        if(str.length()==0){
            System.out.println(asf);
            return;
        }
        
        char ch=str.charAt(0);
        String ros=str.substring(1);
        
    String codeforch=codes[ch-'0'];
   for(int i=0;i<codeforch.length();i++){
       char c=codeforch.charAt(i);
       printKPC(ros,asf+c);
   }
        
    }

}
```


