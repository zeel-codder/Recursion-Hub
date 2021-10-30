---
Name: 'AlexMoonP'
Github: 'https://github.com/AlexLunaP'
WebSite: ''
Problem: 'Add the digits of a number'
Description: 'This program uses recursion calculate the addition of digits from a number given by the user.'
Language: 'C'
---
```C
#include <stdio.h>

int addDigits(int number, int sum){
	if(number<10){
		return number;
	}
	else{
		sum=sum+((number%10)+(addDigits(number/10, sum))); //Recursive call to function addDigits;
		return sum;
	}

}

int main(){
	int number;
	int sum=0;
	printf("Introduce a number to add its digits\n");
	scanf("%i", &number);
	printf("The addition of the digits of number %i is: %i", number,addDigits(number, sum));

	return 0;
}
```