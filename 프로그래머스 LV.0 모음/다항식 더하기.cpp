#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string s[100];
    string ans = "";
    
    int cnt = 0;
    int a = 0, b = 0;
    
    stringstream ss;
    ss.str(polynomial);
    
    while(ss >> s[cnt]) cnt++;
    
    for(int i = 0; i < cnt; ++i) {
        if(s[i][s[i].size() - 1] == 'x') {
            if(s[i].size() == 1) a += 1;
            else a += stoi(s[i].substr(0, s[i].size() - 1));
        }
        
        else if(s[i][s[i].size()-1] == '+') continue;
        else b += stoi(s[i]);
    }
    
    if(a != 0) {
        if(a == 1) ans += "x";
        else ans += to_string(a) + "x";
    }
    
    if(b != 0) {
        if(ans != "") ans += (" + " + to_string(b));
        else ans +=to_string(b);
    }
    
    if(ans == "") ans = "0";
    
    return ans;
}