#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> v;
    
    int l = -1, r = -1;
    
    for (int i = 0; i < str_list.size(); ++i) {
        if (str_list[i] == "l") {
            l = i;
            break;
        }
        
        if (str_list[i] == "r") {
            r = i;
            break;
        }
    }
    
    if (l != -1 && r == -1)
        v.insert(v.begin(), str_list.begin(), str_list.begin() + l);
    
    else if (l == -1 && r != -1)
        v.insert(v.begin(), str_list.begin() + r + 1, str_list.end());
    
    return v;
}