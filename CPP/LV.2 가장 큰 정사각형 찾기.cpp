#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> board) {
    int ans = board[0][0];
    
    for(int i = 1; i < board.size(); ++i) {
        for(int j = 1; j < board[0].size(); ++j) {
            if(board[i][j]) {
                board[i][j] = min(board[i - 1][j], board[i][j - 1]);
                board[i][j] = min(board[i - 1][j - 1], board[i][j]) + 1;
            }
            
            ans = max(ans, board[i][j]);
        }
    }
    
    return ans * ans;
}