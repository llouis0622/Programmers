#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> v;
    
    int A = intervals[0][0];
    int B = intervals[0][1];
    int C = intervals[1][0];
    int D = intervals[1][1];
    
    for (int i = A; i <= B; ++i)
        v.push_back(arr[i]);
    
    for (int i = C; i <= D; ++i)
        v.push_back(arr[i]);
    
    return v;
}