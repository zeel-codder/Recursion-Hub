---
Name: 'Raj Anand'
Github: 'https://github.com/raazanand'
WebSite: ''
Problem: 'Two Sum'
Description: 'Given an array of integers numbers and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.'
Language: 'Java'
---

```java
import java.util.*;

public class twoSumLeetcode {
    static Map<Integer, Integer>map = new HashMap<Integer,Integer>();
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length of array");
        int length = sc.nextInt();
        int[] array = new int[length];
        System.out.println("Enter array element");
        for(int i = 0; i < length; i++) {
            array[i] = sc.nextInt();
        }
        System.out.println("Enter target element");
        int target = sc.nextInt();

        int[] ans = twoSum(array,target);
        System.out.println("index "+ans[0] +","+ "index "+ans[1]);
    }
    public static int[] twoSum(int[] nums, int target){
        return twoSum2(nums, target, 0);
    }
    public static int[] twoSum2(int[] nums, int target, int i) {
           int lookUp = target-nums[i];
           if(map.containsKey(lookUp)){
               return new int []{map.get(lookUp), i};
           }else{
               map.put(nums[i],i);
               return twoSum2(nums,target, ++i);
           }
        }
    }
```
