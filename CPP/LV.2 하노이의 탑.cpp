#include <string>
#include <vector>
using namespace std;

void Hanoi(int n, int a, int b, int c, vector<vector<int>> &v) {
    if(n == 1) v.push_back({a, b}); 
    else {
        Hanoi(n - 1, a, c, b, v);
        
        v.push_back({a, b});
        
        Hanoi(n - 1, c, b, a, v);
    }
}

vector<vector<int>> solution(int n) {
    vector<vector<int>> v;
    
    Hanoi(n, 1, 3, 2, v);
    
    return v;
}