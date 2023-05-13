#include <string>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string str;
    
    for (int i = 0; i < s; ++i)
        str.push_back(my_string[i]);
    
    for (int i = 0; i < overwrite_string.size(); ++i)
        str.push_back(overwrite_string[i]);
    
    for (int i = overwrite_string.size() + s; i < my_string.size(); ++i)
        str.push_back(my_string[i]);
    
    return str;
}