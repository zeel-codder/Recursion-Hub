---
Name: 'AlexMoonP'
Github: 'https://github.com/AlexLunaP'
WebSite: ''
Problem: 'Calculate the division between two integers.'
Description: 'This program uses recursion to calculate the division between two integers.'
Language: 'C'
---
```C
#include <stdio.h>


//Integer division calculator
int integerDivision(int dividend, int divisor, int count){
	if(dividend<divisor){
		printf("Error, numbers can't be divided\n");
		return count;
	}
	else{
		count++; //This counter will be the result of the division.
		integerDivision(dividend-divisor, divisor, count); //Recursive call to function.
	}
}


int main(){
	int dividend, divisor;
	int count=0;

	printf("Introduce two numbers to divide them.\n");

	printf("Introduce the dividend:\n");
	scanf("%i", &dividend);

	printf("Introduce the divisor:\n");
	scanf("%i", &divisor);
	
	printf("The division between %i and %i equals %i\n", dividend, divisor, integerDivision(dividend, divisor, count));

	return 0;
}
```