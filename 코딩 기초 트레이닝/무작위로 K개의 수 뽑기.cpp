#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> v;
    unordered_set<int> u;
    
    for (auto i : arr) {
        if (u.count(i) == 0) {
            v.push_back(i);
            u.insert(i);
        }
        
        if (v.size() == k)
            break;
    }
    
    while (v.size() < k)
        v.push_back(-1);
    
    return v;
}