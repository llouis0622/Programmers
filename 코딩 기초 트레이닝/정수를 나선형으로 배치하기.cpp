#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> v(n, vector<int>(n, 0));
    
    int num = 1, X1 = 0, X2 = n - 1, Y1 = 0, Y2 = n - 1;
    
    while (num <= n * n) {
        for (int i = Y1; i <= Y2; ++i)
            v[X1][i] = num++;
        
        X1++;
        
        for (int i = X1; i <= X2; ++i)
            v[i][Y2] = num++;
        
        Y2--;
        
        for (int i = Y2; i >= Y1; --i)
            v[X2][i] = num++;
        
        X2--;
        
        for (int i = X2; i >= X1; --i)
            v[i][Y1] = num++;
        
        Y1++;
    }
    
    return v;
}