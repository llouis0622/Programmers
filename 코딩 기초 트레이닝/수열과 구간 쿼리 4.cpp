#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (vector<int>& i : queries) {
        int a = i[0], b = i[1], c = i[2];
        
        for (int j = a; j <= b; ++j)
            if (j % c == 0)
                arr[j] += 1;
    }
    
    return arr;
}