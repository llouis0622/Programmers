#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> v;
    
    for (auto& i : picture) {
        string s;
        
        for (auto j : i)
            for (int a = 0; a < k; ++a)
                s += j;
        
        for (int b = 0; b < k; ++b)
            v.push_back(s);
    }
    
    return v;
}