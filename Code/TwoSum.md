---
Name: 'Raj Anand'
Github: 'https://github.com/raazanand'
WebSite: ''
Problem: 'Two Sum'
Description: 'Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.'
Language: 'Java'
---

```java
import java.util.*;

public class selling_stocks {
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
        int[] result = {0,0}; //initialized ther result
        Map<Integer, Integer> map = new HashMap<>();
        /*
        * for every entry in the array, store the (target-num) into the map with the index of the num
        * When the (target- num)appears in the array, we can return the values at that moment itself
        */
        for(int i=0;i<nums.length;i++){
            if(map.containsKey(target-nums[i])) {
                result[0] = i;
                result[1] = map.get(target-nums[i]);
            }
            else map.put(nums[i],i);
        }
        return result;
    }
}
```