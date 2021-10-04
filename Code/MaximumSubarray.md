---
Name: 'Raj Anand'
Github: 'https://github.com/raazanand'
WebSite: ''
Problem: 'Maximum Subarray'
Description: 'Find the contiguous subarray (containing at least one number) which has the largest sum and return its sum'
Language: 'Java'
---

```java

import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length of array");
        int length = sc.nextInt();
        int[] array = new int[length];
        System.out.println("Enter array element");
        for(int i = 0; i < length; i++) {
            array[i] = sc.nextInt();
        }
        System.out.println(maxSubArray(array));

    }
    public static int maxSubArray(int[] nums) {
         //Edge case, empty array
         if (nums.length == 0) {
            return 0;
        }

        int[] sums = new int[nums.length];
        sums[0] = nums[0];
        // origin problem & sub problem relation:
        //f(n) = max(nums[n],nums[n]+dp[n-1])
        for (int i = 1; i < sums.length; i++) {
            sums[i] = Math.max(nums[i], nums[i] + sums[i-1]);
        }
        // find the max subarray sum
        int maxSum = Integer.MIN_VALUE;
        for (int sum : sums) {
            maxSum = (sum > maxSum) ? sum : maxSum;
        }
        return maxSum;
    }

}

```