---
Name: 'Pranay Chauhan'  
Github: 'https://github.com/PranayChauhan2516'  
WebSite: 'https://cses.fi/problemset/task/1625'  
Problem: 'GridPaths'  
Description: 'Number of paths which match the description'  
Language: 'C++' 
---
```c++

#include<bits/stdc++.h>
using namespace std;
 
#define n 7
 
string c;
long ans;
bool vis[n][n];
 
 
bool valid(int i, int j) {
    return i>=0 && j>=0 && i<n && j<n && !vis[i][j];
}
 
void go(int ind, int i, int j) {
    if (i == n - 1 && j == 0) {
            if (ind == 48) {
                ans++;
            }
            return;
        }
 
        vis[i][j] = 1;
        if (c[ind] == '?' || c[ind] == 'L') {
            if (valid(i, j - 1)) {
                if (!(!valid(i, j - 2) && valid(i + 1, j - 1) && valid(i - 1, j - 1))) {
                    go(ind + 1, i, j - 1);
                }
            }
        }
        if (c[ind] == '?' || c[ind] == 'R') {
            if (valid(i, j + 1)) {
                if (!(!valid(i, j + 2) && valid(i + 1, j + 1) && valid(i - 1, j + 1))) {
                    go(ind + 1, i, j + 1);
                }
            }
        }
        if (c[ind] == '?' || c[ind] == 'U') {
            if (valid(i-1, j)) {
                if (!(!valid(i-2, j) && valid(i - 1, j + 1) && valid(i - 1, j - 1))) {
                    go(ind + 1, i-1, j);
                }
            }
        }
        if (c[ind] == '?' || c[ind] == 'D') {
            if (valid(i+1, j)) {
                if (!(!valid(i+2, j) && valid(i + 1, j + 1) && valid(i + 1, j - 1))) {
                    go(ind + 1, i+1, j);
                }
            }
        }
 
        vis[i][j] = 0;
}
 
int main(){
	ans=0;
	cin>>c;
	go(0,0,0);
	cout<<ans;
	return 0;
}
 

```
