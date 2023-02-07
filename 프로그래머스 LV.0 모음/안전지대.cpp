#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int x[8] = {1, 1, 1, 0, 0, -1, -1, -1};
    int y[8] = {1, 0, -1, 1, -1, 1, 0, -1};
    int ans = 0;
    
    for(int i = 0; i < board.size(); ++i) {
        for(int j = 0; j < board.size(); ++j) {
            if(board[i][j] == 1) {
                for(int k = 0; k < 8; ++k) {
                    if(i + x[k] >= 0 && i + x[k] < board.size() && j + y[k] >= 0 && j + y[k] < board.size()) {
                        if(board[i + x[k]][j + y[k]] != 1) board[i + x[k]][j + y[k]] = 2;
                    }
                }
            }
        }
    }
    
    for(int i = 0; i < board.size(); ++i) {
        for(int j = 0; j < board.size(); ++j) {
            if(board[i][j] == 0) ans++;
        }
    }
    
    return ans;
}