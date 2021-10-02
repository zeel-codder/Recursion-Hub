/**
* Contributor🎅
* Name: Krishan Pathak
* Github:https://github.com/krishan821

*/

/**
 * 👉 Problem: Take as input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are separated by a ‘ * ’. E.g. for “hello” return “hel*lo”. Print the value returned
 */


import java.util.*;
public class Main {
    public static void main(String args[]) {
    Scanner sc=new Scanner(System.in);
    String s=sc.next();
    duplicatef(s);
    }
    public static void duplicatef(String s)
    {
        if(s.length()==1)
        {
            System.out.print(s);
            return;
        }
        
        if(s.charAt(0)==s.charAt(1))
        {
            System.out.print(s.substring(0,1)+"*");
            duplicatef(s.substring(1));
        }
        else{
            System.out.print(s.substring(0,1));
            duplicatef(s.substring(1));
        }
    }
}