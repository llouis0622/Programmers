#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> v;
    
    v.assign(num_list.begin(), num_list.end());
    
    if (v.at(num_list.size() - 1) > v.at(num_list.size() - 2)) v.push_back(v.at(num_list.size() - 1) - v.at(num_list.size() - 2));
    
    else v.push_back(v.back() * 2);
    
    return v;
}