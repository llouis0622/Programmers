#include <string>

using namespace std;

int solution(string my_string, string is_prefix) {
    string s = " ";
    
    for (int i = 0; i < is_prefix.size(); ++i)
        s.push_back(my_string[i]);
    
    return !(s.find(is_prefix) == string::npos);
}