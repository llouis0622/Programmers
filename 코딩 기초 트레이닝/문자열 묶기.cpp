#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    map<int, int> m;
    
    int num = 0;
    
    for (auto i : strArr)
        m[i.size()]++;
    
    for (auto i : m)
        num = max(num, i.second);
    
    return num;
}