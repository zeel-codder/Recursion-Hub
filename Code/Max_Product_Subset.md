---
Name: 'Plavani Sahoo'  
Github: 'https://github.com/plavani0208 '    
Problem: 'Maximum Product Subset in an array'  
Description: 'C++ brute force solution for the problem'  
Language: 'C++' 
---
``` C++ 

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
// Function to generate the product of all elements in a given set
// and update maximum product found so far

void findMaxProduct(vector<int> const &set, int &maximum)
{
    int product = 1;
 
    for (int j: set) {
        product = product * j;
    }
 
    // if the set is not empty, then update the product
    
    if (set.size()) {
        maximum = max (maximum, product);
    }
}
 
// Function to generate a power set of a given set `S`

void findPowerSet(vector<int> const &S, vector<int> &set, int n, int &maximum)
{
    // if we have considered all elements, we have generated a subset
    if (n == 0)
    {
        // compute its product of elements and update the maximum product
        // found so far
        findMaxProduct(set, maximum);
        return;
    }
 
    // consider the n'th element
    
    set.push_back(S[n - 1]);
    findPowerSet(S, set, n - 1, maximum);
 
    set.pop_back();            
 
    // or don't consider the n'th element
    
    findPowerSet(S, set, n - 1, maximum);
}
 
int main()
{
    vector<int> S = { -6, 4, -5, 8, -10, 0, 8 };
    int n = S.size();
 
    vector<int> set;
    int maximum = INT_MIN;
 
    findPowerSet(S, set, n, maximum);
 
    printf("The maximum product of a subset is %d", maximum);
    printf(\n);
 
    return 0;
}
```

