// #include <bits/stdc++.h>
// using namespace std;
// #define pi 3.14
// int main()
// {
//     int n;
//     cout<<"Enter the value of  radious"<<endl;
//     cin>>n;
//     // double pi=3.14;
//     double a=pi*n*n;
//     cout<<"Area is :: "<<a<<endl;
// return 0;
// }

// C++ program to illustrate macros
#include <iostream>
using namespace std;
int Score =5;    // Score is Defined globally we can use it anywhere

// Macro definition
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

// Driver Code
int main()
{
	// Print the message
	cout << "Geeks for Geeks have "
		<< INSTAGRAM << "K followers on Instagram!";

	return 0;
}
