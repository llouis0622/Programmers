#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    sort(num_list.begin(), num_list.end());
    
    vector<int> v;
    
    for (int i = 5; i < num_list.size(); ++i)
        v.push_back(num_list[i]);
    
    return v;
}