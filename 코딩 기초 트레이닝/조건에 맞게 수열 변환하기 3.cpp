#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> v;
    
    if (k % 2 == 1) {
        for (int i = 0; i < arr.size(); ++i)
            v.push_back(arr[i] * k);
    }
    
    else {
        for (int i = 0; i < arr.size(); ++i)
            v.push_back(arr[i] + k);
    }
    
    return v;
}