#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> v;
    
    for(int i = 0; i < my_string.length(); ++i) {
        if(isdigit(my_string[i])) v.push_back(my_string[i] - 48);
    }
    
    sort(v.begin(), v.end());
    
    return v;
}