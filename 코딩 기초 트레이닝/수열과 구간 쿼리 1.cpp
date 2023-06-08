#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> v;
    
    for (int i = 0; i < arr.size(); ++i)
        v.push_back(arr[i]);
    
    for (int i = 0; i < queries.size(); ++i) {
        int a = queries[i][0];
        int b = queries[i][1];
        
        for (int j = a; j <= b; ++j)
            v[j]++;
    }
    
    return v;
}