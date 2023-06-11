#include <string>

using namespace std;

string solution(int q, int r, string code) {
    string s;
    
    for (int i = 0; i < code.size(); ++i)
        if (i % q == r) s += code[i];
    
    return s;
}