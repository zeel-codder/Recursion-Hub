/**
* Contributor🎅
* Name: Novaenn (Samuele Bella)
* Github: https://github.com/Novaenn
*/

/**
 * 👉 Problem: Recursive Insertion Sort 
 * 👑 Description: Sort an array of n numbers
 * Explanation : Insertion Sort works by splitting the arrary in a sorted part and an unsorted one, each iteration places one value from the unsorted pile into the sorted one.
 * Language Used Java
 */
import java.util.Arrays;

public class InsertionSort{
  
    public static void Insertion(int arr[], int length){
        //Base Case
        if (length <= 1){
            return;
        }
        //Sort the first n-1 elements
        Insertion(arr, length-1);
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



    public static void main(String[] args)
    {
        int arr[] = {7, 1, 45, 8, 0};
      
        Insertion(arr, arr.length);
         
        System.out.println(Arrays.toString(arr));
    }
}