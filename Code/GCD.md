---
Name: "zeel"
Github: "https://github.com/zeel-codder"
Problem: "GCD of two numbers"
Explanation: "The Greatest Common Divisor (also
  known as GCD) is the largest number that divides evenly into each number in a
  given set of numbers.
  Example:
  GCD(12,18)=6"
Language: "java"
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
}
```
