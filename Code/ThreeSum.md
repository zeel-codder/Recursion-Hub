---
Name: 'Raj Anand'
Github: 'https://github.com/raazanand'
WebSite: ''
Problem: 'Three Sum'
Description: 'Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.'
Language: 'Java'
---

```java
import java.util.*;

public class threeSumLeetcode {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length of array");
        int length = sc.nextInt();
        int[] array = new int[length];
        System.out.println("Enter array element");
        for(int i = 0; i < length; i++) {
            array[i] = sc.nextInt();
        }
        List<List<Integer>> ans = threeSum(array);

        for(List<Integer> list: ans) {
        	System.out.print("[");
            for(Integer ele: list) {
                System.out.print(ele + ", ");
            }
            System.out.print("]");
            System.out.println();
        }
    }
    public static List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> ll = new ArrayList<>();
        Arrays.sort(nums);
        for(int i=0;i<nums.length-2;++i){
            /* Duplicate check 1 */
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int l=i+1, r=nums.length-1;
            while(l<r){
                if(nums[i]+nums[l]+nums[r] == 0) {
                    ll.add(Arrays.asList(nums[i], nums[l], nums[r]));
                    ++l;
                    --r;
                    /* Duplicate check 2 */
                    while(l<r&&nums[l]==nums[l-1]) // l-1 index could be safely accessed since we have increased l atleast by 1
                        ++l;
                    /* Duplicate check 3*/
                    while(l<r && nums[r]==nums[r+1]) // r+1 index could be safely accessed since we have decrease r atleast by 1
                        --r;
                }
                else if(nums[i]+nums[l]+nums[r] <0)
                    ++l;
                else
                    --r;
            }
        }
        return ll;
    }
}
```
