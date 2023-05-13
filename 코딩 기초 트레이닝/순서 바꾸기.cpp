#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> v;
    
    for (int i = n; i < num_list.size(); ++i)
        v.push_back(num_list[i]);
    
    num_list.erase(num_list.begin() + n, num_list.end());
    
    for (int i = 0; i < num_list.size(); ++i)
        v.push_back(num_list[i]);
    
    return v;
}