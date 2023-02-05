#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string s) {
    map<char, int> m;
    
    string str = "";
    
    for(int i = 0; i < s.size(); ++i) m[s[i]]++;
    
    for(auto i : m) if(i.second == 1) str += i.first;
    
    return str;
}