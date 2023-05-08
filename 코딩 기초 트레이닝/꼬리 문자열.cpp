#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string s = "";
    
    for (auto i : str_list) {
        if (i.find(ex) != string::npos) continue;
        else s += i;
    }
    
    return s;
}