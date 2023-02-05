#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> v;
    
    int cnt = (my_str.size() - 1) / n + 1, idx = 0;
    
    while(cnt--) {
        if(cnt == 0) v.push_back(my_str.substr(idx));
        else v.push_back(my_str.substr(idx, n));
        
        idx += n;
    }
    
    return v;
}