---
Name: 'Ankit Raibole'
Github: 'https://github.com/iota-008'
WebSite: 'https://iota-008.github.io'
Problem: 'Binary to Gray code converter.'
Description: 'Binary to Gray code converter.'
Language: 'C++' 
---
```C++
/**
Binary : 0011
Gray   : 0010

Binary : 01001
Gray   : 01101
*/

#include <bits/stdc++.h>
using namespace std;

int binary_to_gray(int n)
{
	if (!n)
		return 0;

	int a = n % 10;

	int b = (n / 10) % 10;

	if ((a && !b) || (!a && b))		
			return (1 + 10 * binary_to_gray(n / 10));

	return (10 * binary_to_gray(n / 10));
}

int main()
{
	int binary_number;
    cout<<"Enter binary number to be converted : "
    cin>>binary_number;

	printf("%d", binary_to_gray(binary_number));
	return 0;
}
```