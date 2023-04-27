#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> v;
    
    for (int i = n - 1; i < num_list.size(); ++i)
        v.push_back(num_list[i]);
    
    return v;
}