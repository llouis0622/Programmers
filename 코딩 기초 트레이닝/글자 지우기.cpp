#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string s;
    
    vector<bool> v(my_string.size(), true);
    
    for (auto i : indices)
        v[i] = false;
    
    for (int i = 0; i < my_string.size(); ++i)
        if (v[i]) s += my_string[i];
    
    return s;
}