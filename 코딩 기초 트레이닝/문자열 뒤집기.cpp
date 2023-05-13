#include <string>

using namespace std;

string solution(string my_string, int s, int e) {
    string str;
    
    for (int i = 0; i < s; ++i)
        str.push_back(my_string[i]);
    
    for (int i = e; i >= s; --i)
        str.push_back(my_string[i]);
    
    for (int i = e + 1; i < my_string.size(); ++i)
        str.push_back(my_string[i]);
    
    return str;
}