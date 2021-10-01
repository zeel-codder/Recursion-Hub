
/**
* Contributor🎅
* Name: shelendravashishtha2 (Shelendra Vashishtha)
* Github: https://github.com/shelendravashishtha2
* WebSite(optional): https://shelendravashishtha2.github.io/portfolio/
*/

/**
 * 👉 Problem: Factorial of a Number 👑 Description: Find the Factorial of a
 * given Number. Explanation : Any Factorial number is a multiplication of
 * numbers from 1 till that number. Language Used Java
 */

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