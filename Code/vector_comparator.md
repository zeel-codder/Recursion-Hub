---
Name: 'AlexMoonP'
Github: 'https://github.com/AlexLunaP'
WebSite: ''
Problem: 'Compare two vectors.'
Description: 'This program uses recursion to find out if two vectors are equal.'
Language: 'C'
---
```C
#include <stdlib.h>
#include <stdio.h>

int compare_vectors(int v[], int t[], int n, int i){
	if(i==n-1){
		if(v[i]==t[i]){
			return 1;
		}
		else{
			return 0;
			exit(-1);
		}
	}
	else{
		if(v[i]==t[i]){
			i++;
			return compare_vectors(v, t, n, i);
		}
		else{
			return 0;
			exit(-1);
		}
	}
	return 1;

}


int main(){
	int v[]={1,2,4};
	int t[]={1,2,4};
	int n=3;
	int i=0;
	if(compare_vectors(v, t, n, i)==1){
		printf("Vectors are equal\n");
	}
	else{
		printf("Vectors are not equal\n");
	}

	return 0;
}
```
