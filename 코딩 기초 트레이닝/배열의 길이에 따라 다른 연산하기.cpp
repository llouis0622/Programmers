#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> v;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr.size() % 2 == 1) {
            if (i % 2 == 0) v.push_back(arr[i] + n);
            else v.push_back(arr[i]);
        }
        
        else {
            if (i % 2 == 1) v.push_back(arr[i] + n);
            else v.push_back(arr[i]);
        }
    }
    
    return v;
}