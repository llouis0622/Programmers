#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> v;
    
    for (auto i : strArr)
        if (i.find("ad") == string::npos) v.push_back(i);
    
    return v;
}