#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> v;
    
    for (int i = 0; i < flag.size(); ++i) {
        if (flag[i]) v.insert(v.end(), 2 * arr[i], arr[i]);
        else v.erase(v.end() - arr[i], v.end());
    }
    
    return v;
}