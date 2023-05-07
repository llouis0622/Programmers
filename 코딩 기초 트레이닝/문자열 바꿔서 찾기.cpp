#include <string>

using namespace std;

int solution(string myString, string pat) {
    string s;
    
    for (auto i : myString) {
        if (i == 'A') s.push_back('B');
        else s.push_back('A');
    }
    
    return (s.find(pat) != string::npos);
}