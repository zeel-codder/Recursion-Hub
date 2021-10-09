---
Name: 'Hasan Kataya'
Github: 'https://github.com/Hkataya'
WebSite: ''
Problem: 'Recursive Selection Sort'
Description: 'Sort an array of n elements using selection sort. Complexity O(n^2)'
Explanation: 'Selection Sort works by splitting the arrary in a two subarrays (one sorted and one unsorted). In every iteration, the minimum element (ascending order) from the unsorted subarray is chosen and moved to the sorted subarray.'
Language: 'java' 
---

```java

import java.util.Arrays;

class SelectionSort
{

    public static void selectionSort(int[] arr, int i, int n)
    {
        int min = i;
        int temp = 0;

        // find the minimum
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;

        // Swap minimum with current index
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;

        if (i + 1 < n)
            selectionSort(arr, i + 1, n);
    }

    // Driver
    public static void main(String[] args)
    {
        int[] arr = { 3, 5, 8, 4, 1, 9, -2 };
        selectionSort(arr, 0, arr.length);
        System.out.println(Arrays.toString(arr));
    }

}

```
