#include <bits/stdc++.h>
using namespace std;

int solution(string t, string p) {
    int ans = 0;
    
    for(int i = 0; i < t.size() - p.size() + 1; ++i) {
        string s = t.substr(i, p.size());
        bool bl = false;
        
        for(int j = 0; j < p.size(); ++j) {
            if(s[j] < p[j]) {
                ans++;
                bl = true;
                break;
            }
            
            else if(s[j] > p[j]) {
                bl = true;
                break;
            }
        }
        
        if(!bl) ans++;
    }
    
    return ans;
}
