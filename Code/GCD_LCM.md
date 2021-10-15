---
Name: 'dhruvil-shah'
Github: 'https://github.com/dhruvil-shah'
WebSite: 'https://serene-knuth-aca1d4.netlify.app/'
Problem: 'GCD and LCM of two numbers'
Description: 'Find the Factorial of a given Number. '
Explanation: 'The Greatest Common Divisor (also
  known as GCD) is the largest number that divides evenly into each number in a
  given set of numbers.
  The Least Common Multiple (also known as LCM) is the smallest 
  positive multiple that is common to two or more numbers.
  Example:
  GCD(12,18)=6
  LCM(12,18)=36'   
Language: 'java'
---
```java
public class GCD_LCM {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       int a=sc.nextInt(),b=sc.nextInt();
       int gcd=gcd(a, b),lcm=lcm(a,b);
       System.out.println("GCD:"+gcd+"   LCM:"+lcm);
    }

    

    //A simple school methodology for finding GCD
    static int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }


    //Remember a*b=gcd(a,b)*lcm(a,b);
    static int lcm(int a, int b)
    {
        return (a / gcd(a, b)) * b;
    }
}
```