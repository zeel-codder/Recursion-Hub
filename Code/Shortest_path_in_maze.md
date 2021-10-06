---
Name: 'Dinsha Jaiswal'
Github: 'https://github.com/fleurdelis07'
WebSite: 'https://www.linkedin.com/in/ankitrao/'
Problem: 'Find the shortest path in a maze'
Description: 'Given a maze in the form of binary rectangular matrix, find the shortest paths length in the maze.'
Language: 'c++' 
---
```c++

#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
using namespace std;
 
// Check if it is possible to go to (x, y) from the current position. The
// function returns false if the cell has value 0 or already visited
bool isSafe(vector<vector<int>> &mat, vector<vector<bool>> &visited, int x, int y)
{
    return (x >= 0 && x < mat.size() && y >= 0 && y < mat[0].size()) &&
            mat[x][y] == 1 && !visited[x][y];
}
 
// Find the shortest possible route in a matrix `mat` from source cell (i, j)
// to destination cell (x, y).
 
// `min_dist` is passed by reference and stores the length of the longest path
// from source to a destination found so far, and `dist` maintains the length
// of the path from a source cell to a current cell (i, j).
 
void findShortestPath(vector<vector<int>> &mat, vector<vector<bool>> &visited,
                int i, int j, int x, int y, int &min_dist, int dist)
{
    // if the destination is found, update `min_dist`
    if (i == x && j == y)
    {
        min_dist = min(dist, min_dist);
        return;
    }
 
    // set (i, j) cell as visited
    visited[i][j] = true;
 
    // go to the bottom cell
    if (isSafe(mat, visited, i + 1, j)) {
        findShortestPath(mat, visited, i + 1, j, x, y, min_dist, dist + 1);
    }
 
    // go to the right cell
    if (isSafe(mat, visited, i, j + 1)) {
        findShortestPath(mat, visited, i, j + 1, x, y, min_dist, dist + 1);
    }
 
    // go to the top cell
    if (isSafe(mat, visited, i - 1, j)) {
        findShortestPath(mat, visited, i - 1, j, x, y, min_dist, dist + 1);
    }
 
    // go to the left cell
    if (isSafe(mat, visited, i, j - 1)) {
        findShortestPath(mat, visited, i, j - 1, x, y, min_dist, dist + 1);
    }
 
    // backtrack: remove (i, j) from the visited matrix
    visited[i][j] = false;
}
 
// Wrapper over findShortestPath() function
int findShortestPathLength(vector<vector<int>> &mat, pair<int, int> &src,
                    pair<int, int> &dest)
{
    // base case: invalid input
    if (mat.size() == 0 || mat[src.first][src.second] == 0 ||
            mat[dest.first][dest.second] == 0) {
        return -1;
    }
 
    // `M × N` matrix
    int M = mat.size();
    int N = mat[0].size();
 
    // construct an `M × N` matrix to keep track of visited cells
    vector<vector<bool>> visited;
    visited.resize(M, vector<bool>(N));
 
    int min_dist = INT_MAX;
    findShortestPath(mat, visited, src.first, src.second, dest.first, dest.second,
            min_dist, 0);
 
    if (min_dist != INT_MAX) {
        return min_dist;
    }
 
    return -1;
}
 
int main()
{
    vector<vector<int>> mat =
    {
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 },
        { 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 },
        { 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 0, 1, 0, 0, 1, 1, 0, 0, 1 },
    };
 
    pair<int, int> src = make_pair(0, 0);
    pair<int, int> dest = make_pair(7, 5);
 
    int min_dist = findShortestPathLength(mat, src, dest);
    if (min_dist != -1)
    {
        cout << "The shortest path from source to destination "
                "has length " << min_dist;
    }
    else {
        cout << "Destination cannot be reached from a given source";
    }
 
    return 0;
}
```