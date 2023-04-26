#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    stringstream ss(my_string);
    
    vector<string> v;
    string s;
    
    while (getline(ss, s, ' '))
        v.push_back(s);
    
    return v;
}