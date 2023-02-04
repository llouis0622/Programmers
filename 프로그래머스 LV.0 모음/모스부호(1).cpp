#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

map<string, char> m;

string arr[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

string solution(string letter) {
    string ans = "";
    string str = "";
    
    stringstream x(letter);
    
    for(int i = 0; i < 26; ++i) m[arr[i]] = 'a' + i;
    
    while(x >> str) ans += m[str];
    
    return ans;
}