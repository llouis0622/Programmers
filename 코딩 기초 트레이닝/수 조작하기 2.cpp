#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string s = "";
    
    for (int i = 0; i < numLog.size() - 1; ++i) {
        if (numLog[i + 1] == numLog[i] + 1) s += "w";
        else if (numLog[i + 1] == numLog[i] - 1) s += "s";
        else if (numLog[i + 1] == numLog[i] + 10) s += "d";
        else s += "a";
    }
    
    return s;
}