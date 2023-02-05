#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int ans = 2;
    
    for(int i = 0; i < dic.size(); ++i) {
        map<char, int> m;
        
        int cnt = 0;
        
        for(int j = 0; j < dic[i].size(); ++j) m[dic[i][j]]++;
        
        if(m.size() == spell.size()) {
            for(int j = 0; j < spell.size(); ++j) {
                if(m[spell[j][0]] == 1) cnt++;
            }
        }
        
        if(cnt == spell.size()) return 1;
    }
    
    return ans;
}