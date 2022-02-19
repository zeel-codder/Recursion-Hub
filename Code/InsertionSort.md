---
Name: 'Samuele Bella'
Github: 'https://github.com/Novaenn'
WebSite: ''
Problem: 'Recursive Insertion Sort'
Description: 'Order an array of n elements with Insertion Sort.'
Explanation : 'Insertion Sort works by splitting the arrary in a sorted part and an unsorted one, each iteration places one value from the unsorted pile into the sorted one.'
Language: 'java' 
---

```java
/**
Insertion Sort compares every element on the unsorted part to those on the sorted part. 

Example:

[5, 1, 4, 9]
We check for the base case, but our array size is not <= 1 so we keep going.
We sort recursively the n-1 elements in the array and we insert the last element in the correct position in the sorted part of the array.

We keep doing this until we have an array size <= 1 and the array will be fully sorted.
*/
import java.util.Arrays;

public class InsertionSort{
    public static void main(int arr[], int length){
        //Base Case
        if (n <= 1){
            return;
        }
        //Sort the first n-1 elements
        insertionSort(arr, length-1);
        int last = arr[length-1];
        int j = length-2;

        //Shift the elements of the sorted part that are greater than the value to the right
        while (j >= 0 && arr[j] > last)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = last;
    }
}
```
