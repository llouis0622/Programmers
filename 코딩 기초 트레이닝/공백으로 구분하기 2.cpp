#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> v;
    
    string s;
    
    stringstream ss(my_string);
    
    while (ss >> s)
        v.push_back(s);
    
    return v;
}