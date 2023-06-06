#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> v;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (v.empty() || v.back() < arr[i])
            v.push_back(arr[i]);
        else {
            v.pop_back();
            i--;
        }
    }
    
    return v;
}