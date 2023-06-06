#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> v;
    
    istringstream ss(myString);
    string s;
    
    while (getline(ss, s, 'x'))
        v.push_back(s);
    
    v.erase(remove(v.begin(), v.end(), ""), v.end());
    sort(v.begin(), v.end());
    
    return v;
}