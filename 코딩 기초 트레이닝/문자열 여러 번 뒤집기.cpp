#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string s = my_string;
    
    for (auto& i : queries)
        reverse(s.begin() + i[0], s.begin() + i[1] + 1);
    
    return s;
}