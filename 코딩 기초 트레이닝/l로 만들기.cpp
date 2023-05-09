#include <string>

using namespace std;

string solution(string myString) {
    string s = "";
    
    for (auto i : myString) {
        if (i < 109) s.push_back('l');
        else s.push_back(i);
    }
    
    return s;
}