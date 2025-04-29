#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> board)
{
    int n = board.size();
    int m = board[0].size();
    
    vector<vector<int>> dp(n, vector<int>(m, 0));
    int max_side = 0;  
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (board[i][j] == 1) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                }
                max_side = max(max_side, dp[i][j]);
            }
        }
    }
    
    return max_side * max_side;
}