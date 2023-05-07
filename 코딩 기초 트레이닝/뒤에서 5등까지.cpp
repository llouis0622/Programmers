#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> v;
    
    sort(num_list.begin(), num_list.end());
    
    for (int i = 0; i < 5; ++i)
        v.push_back(num_list[i]);
    
    return v;
}