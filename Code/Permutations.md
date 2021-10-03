---
Name: 'Saksham Negi'  
Github: 'https://github.com/sakshamian'  
Problem: 'Permutations'  
Description: 'Given a number n, generate all permutations of a set of n elements.' 
Language: 'cpp'
---

```
#include <bits/stdc++.h>
#define N 100002
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;
vector<int> permutation;
bool chose[N + 1];
void search(int n)
{

    if (permutation.size() == n)
    {
        for (auto it : permutation)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (chose[i])
                continue;
            chose[i] = true;
            permutation.push_back(i);
            search(n);
            chose[i] = false;
            permutation.pop_back();
        }
    }
}
int main()
{
    fast;
    int n;
    cin >> n;
    search(n);
    // }
    return 0;
}
```
