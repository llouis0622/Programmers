#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> v = arr;
    
    int num = max(arr.size(), arr[0].size());
    
    for (vector<int>& i : v)
        i.resize(num, 0);
    
    while (v.size() < num)
        v.push_back(vector<int>(num, 0));
    
    return v;
}