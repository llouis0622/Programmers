#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int v[200] = {};
    
    int cnt = 0;
    
    for(int i = 0; i < lines.size(); ++i) {
        for(int j = lines[i][0]; j < lines[i][1]; ++j) v[j + 100]++;
    }

    for(int i = 0; i < 200; ++i) if(v[i] >= 2) cnt++;
    
    return cnt;
}