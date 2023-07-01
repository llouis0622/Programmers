#include <string>
#include <vector>
#include <sstream>
#include <regex>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> v;
    
    myStr = regex_replace(myStr, regex("[abc]"), " ");    
    stringstream ss(myStr);
    string s;
    
    while(ss >> s) v.emplace_back(s);
    
    if(v.empty()) v.emplace_back("EMPTY");
    
    return v;
}