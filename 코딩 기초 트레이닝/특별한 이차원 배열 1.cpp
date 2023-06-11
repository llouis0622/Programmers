#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> v(n, vector<int> (n, 0));
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i == j) v[i][j] = 1;
    
    return v;
}