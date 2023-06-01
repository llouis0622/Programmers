#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    bool bl = true;
    
    for (int i = 0; i < arr.size(); ++i)
        for (int j = 0; j < arr[i].size(); ++j)
            if (arr[i][j] != arr[j][i]) bl = false;
    
    return bl;
}