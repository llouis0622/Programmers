#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> v;
    
    for (int i = 0; i < n; ++i)
        v.push_back(num_list[i]);
    
    return v;
}