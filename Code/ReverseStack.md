---
Name: 'zgraceman'
Github: 'https://github.com/zgraceman'
WebSite: 'https://github.com/zgraceman'
Problem: 'Reverse a Stack'
Description: 'Given a stack of characters, reverse it using stack functions and recursion.'
Explanation: 'See code below for solution'
Language: 'java'
---

```java
import java.util.Stack;

class ReverseStack {

    static Stack<Character> stack = new Stack<>();

    // Recursive function, inserts characters at bottom
    static void insert_at_bottom(char x)
    {
        if (stack.isEmpty())
            stack.push(x);

        else {
            char a = stack.peek();
            stack.pop();
            insert_at_bottom(x);
            stack.push(a);
        }
    }

    static void reverse()
    {
        if (stack.size() > 0) {
            char x = stack.peek();
            stack.pop();
            reverse();
            insert_at_bottom(x);
        }
    }

    // Main
    public static void main(String[] args)
    {
        // Initializing stack
        stack.push('1');
        stack.push('2');
        stack.push('3');
        stack.push('4');
        stack.push('5');
        stack.push('6');

        System.out.println("Original Stack");
        System.out.println(stack);
        reverse();
        System.out.println("Reversed Stack");
        System.out.println(stack);
    }
}
```
