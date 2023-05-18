#include <string>

using namespace std;

string solution(string code) {
    string ret = "";
    
    bool mode = 0;
    
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == '1') mode = !mode;
        else if (i % 2 == mode) ret += code[i];
    }
    
    return ret.empty() ? "EMPTY" : ret;
}