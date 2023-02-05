#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> v;
    
    for(int i = 0; i < num_list.size() / n; ++i) {
        vector<int> vtr;
        
        for(int j = 0; j < n; ++j) {
            vtr.push_back(num_list[i * n + j]);
        }
        
        v.push_back(vtr);
    }
    
    return v;
}