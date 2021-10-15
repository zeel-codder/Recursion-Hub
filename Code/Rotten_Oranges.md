---
Name: 'Yogesh kumar Yadav'  
Github: 'https://github.com/YogeshKumarYadav'  
Problem: 'how much time it will take to rot all oranges graph application'  
Description: 'given a matrix find time taken to rot all oranges place '  
Language: 'c++' 
---


```cpp


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        //vector<vector<bool>> vis(n, vector<bool>(m,false));
        queue<pair<int,int>> q1,q2;
        
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(grid[i][j] == 2)
                    q1.push(make_pair(i,j));
        
        int count = 0;   
        while(!q1.empty() || !q2.empty())
        {   if(!q1.empty())
                count++;
            while(!q1.empty())
            {   
                pair<int, int> x = q1.front();
                q1.pop();
                int i = x.first;
                int j = x.second;
                grid[i][j]++;
                
                if(i+1 >=0 && i+1 < n && j >= 0 && j < m && grid[i+1][j] == 1)
                {
                    q2.push(make_pair(i+1,j));
                    grid[i+1][j]++;
                }
                if(i >=0 && i < n && j+1 >= 0 && j+1 < m && grid[i][j+1] == 1)
                {
                    q2.push(make_pair(i,j+1));
                    grid[i][j+1]++;
                }
                if(i-1 >=0 && i-1 < n && j >= 0 && j < m && grid[i-1][j] == 1)
                {
                    q2.push(make_pair(i-1,j));
                    grid[i-1][j]++;
                }
                if(i >=0 && i < n && j-1 >= 0 && j-1 < m && grid[i][j-1] == 1)
                {
                    q2.push(make_pair(i,j-1));
                    grid[i][j-1]++;
                }
            }
            if(!q2.empty())
                count++;
            while(!q2.empty())
            {   
                pair<int, int> x = q2.front();
                q2.pop();
                int i = x.first;
                int j = x.second;
                grid[i][j]++;
                
                if(i+1 >=0 && i+1 < n && j >= 0 && j < m && grid[i+1][j] == 1)
                {
                    q1.push(make_pair(i+1,j));
                    grid[i+1][j]++;
                }
                if(i >=0 && i < n && j+1 >= 0 && j+1 < m && grid[i][j+1] == 1)
                {
                    q1.push(make_pair(i,j+1));
                    grid[i][j+1]++;
                }
                if(i-1 >=0 && i-1 < n && j >= 0 && j < m && grid[i-1][j] == 1)
                {
                    q1.push(make_pair(i-1,j));
                    grid[i-1][j]++;
                }
                if(i >=0 && i < n && j-1 >= 0 && j-1 < m && grid[i][j-1] == 1)
                {
                    q1.push(make_pair(i,j-1));
                    grid[i][j-1]++;
                }
            }
        }
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                if(grid[i][j] == 1)
                    return -1;
                    
        return count-1;       
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
```