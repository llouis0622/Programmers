#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> v;
    
    int i = 0;
    
    while (i < arr.size()) {
        if(v.empty()) v.push_back(arr[i++]);
        else if(v.back() != arr[i]) v.push_back(arr[i++]);
        else {
            v.pop_back();
            
            i++;
        }
    }
    
    if(v.empty()) v.emplace_back(-1);
    
    return v;
}