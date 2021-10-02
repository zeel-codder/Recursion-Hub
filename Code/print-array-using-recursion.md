---
Name: 'Rahul Khattri'  
Github: 'https://github.com/rahulkhattri0'  
Problem: 'Write a program in C to print the array elements using recursion.'  
Description: 'print array elements using recursion'  
Language: 'C' 
---

```C
#include <stdio.h>
#define MAX 100

void ArrayElement(int arr1[], int st, int l);
 
int main()
{
    int arr1[MAX];
    int n, i;
	printf("\n\n Recursion : Print the array elements :\n");
	printf("-------------------------------------------\n");
	
	printf(" Input the number of elements to be stored in the array :");
    scanf("%d",&n);
   
    printf(" Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
        {
	      printf(" element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
     
    printf(" The elements in the array are : ");
    ArrayElement(arr1, 0, n);//call the function ArrayElement
    printf("\n\n"); 
    return 0;
}

void ArrayElement(int arr1[], int st, int l)
{
    if(st >= l)
        return;
         
    //Prints the current array element
    printf("%d  ", arr1[st]);
     
    /* Recursively call ArrayElement to print next element in the array */
    ArrayElement(arr1, st+1, l);//calling the function  ArrayElement itself
}
```