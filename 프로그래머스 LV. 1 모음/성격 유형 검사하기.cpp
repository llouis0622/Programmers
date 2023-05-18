#include <string>
#include <vector>
#include <map>

using namespace std;

int num[8] = {0, 3, 2, 1, 0, 1, 2, 3};

string solution(vector<string> survey, vector<int> choices) {
    string s = "";
    
    map <char, int> m;
    
    for(int i = 0; i < survey.size(); ++i) {
        int ans = choices[i];
        string str = survey[i];
        
        m[str[ans / 4]] += num[ans];
    }
    
    s += (m['R'] >= m['T']) ? "R" : "T";
    s += (m['C'] >= m['F']) ? "C" : "F";
    s += (m['J'] >= m['M']) ? "J" : "M";
    s += (m['A'] >= m['N']) ? "A" : "N";

    return s;
}