#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string solution(string s) {
    string ans = "";
    string str;
    
    vector<int> v;
    
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == ' ') {
            v.push_back(atoi(str.c_str()));
            
            str.clear();
        }
        
        else {
            str += s[i];
        }
    }
    
    v.push_back(atoi(str.c_str()));
    
    sort(v.begin(), v.end(), greater<int>());
    
    ans += to_string(v.back()) + " " + to_string(v.front());
    
    return ans;
}