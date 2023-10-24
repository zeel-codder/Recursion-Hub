#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<pair<int, int>> arr(N + 1, {0, 0});
        for (int i = 0; i < trust.size(); ++i) {
            arr[trust[i][0]].first += 1;
            arr[trust[i][1]].second += 1;
        }

        for (int i = 1; i <= N; ++i) {
            if (arr[i].first == 0 && arr[i].second == N - 1) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution solution;
    int N = 4;
    vector<vector<int>> trust = {{1, 3}, {1, 4}, {2, 3}, {2, 4}, {4, 3}};
    int judge = solution.findJudge(N, trust);
    cout << "The judge is: " << judge << endl;
    return 0;
}
