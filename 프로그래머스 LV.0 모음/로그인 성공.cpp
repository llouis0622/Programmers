#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    map<string, string> m;
    
    string ans = "";
    
    for(int i = 0; i < db.size(); ++i) m[db[i][0]] = db[i][1];
    
    for(int i = 0; i < m.size(); ++i) {
    	if(m.find(id_pw[0]) != m.end()){
            if(m[id_pw[0]] == id_pw[1]){
                ans = "login";
                break;
            }
            
            else if(m[id_pw[0]] != id_pw[1]) {
                ans = "wrong pw";
                break;
            }
        }
        
        else ans = "fail";
    }
    
    return ans;
}