#include <string>

using namespace std;

string solution(string myString, string pat) {
    int num = myString.rfind(pat);
    
    return myString.substr(0, num + pat.size());
}