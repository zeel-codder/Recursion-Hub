/**
* Contributor🎅
* Name: manoharrk22
* Github: https://github.com/manoharrk22
*/

/**
* 👉 Problem: Reverse a stack using recursion
* 👑 Description: Write a program to reverse a stack using recursion. You are not allowed to * use loop constructs like while, for, do while .
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

// Java code to reverse a stack using recursion
import java.util.*;
import java.io.*;

class Main{
	
	static Stack<Character> st = new Stack<>();
	
	static void insert_at_bottom(char x)
	{

		if(st.isEmpty())
			st.push(x);

		else
		{
			char a = st.peek();
			st.pop();
			insert_at_bottom(x);

			st.push(a);
		}
	}
	static void reverse()
	{
		if(st.size() > 0)
		{
			
			char x = st.peek();
			st.pop();
			reverse();
			
			insert_at_bottom(x);
		}
	}
	
	public static void main(String[] args)
	{
		st.push('1');
		st.push('2');
		st.push('3');
		st.push('4');
		
		System.out.println("Original Stack");
		System.out.println(st);
		
		reverse();
		
		System.out.println("Reversed Stack");
		System.out.println(st);
	}
}
