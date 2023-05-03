#include <string>

using namespace std;

string solution(string my_string, string alp) {
    string s;
    
    for (int i = 0; i < my_string.length(); ++i) {
        if (alp[0] == my_string[i]) s.push_back(toupper(my_string[i]));
        else s.push_back(my_string[i]);
    }
    
    return s;
}