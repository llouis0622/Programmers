#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> v;
    
    for (int i = 0; i < queries.size(); ++i) {
        int a = queries[i][0];
        int b = queries[i][1];
        int c = queries[i][2];
        int num = -1;
        
        for (int j = a; j <= b; ++j)
            if (arr[j] > c && (num == -1 || arr[j] < num))
                num = arr[j];
        
        v.push_back(num);
    }
    
    return v;
}