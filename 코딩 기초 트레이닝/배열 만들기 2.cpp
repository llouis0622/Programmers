#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> v;
    
    for (int i = l; i <= r; ++i) {
        string s = to_string(i);
        bool bl = true;
        
        for (auto j : s) {
            if (j != '0' && j != '5') {
                bl = false;
                break;
            }
        }
        
        if (bl) v.push_back(i);
    }
    
    if (v.empty()) v.push_back(-1);
    
    return v;
}