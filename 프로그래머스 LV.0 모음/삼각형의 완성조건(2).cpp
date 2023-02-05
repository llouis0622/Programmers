#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int cnt = 0;
    
    sort(sides.begin(), sides.end());
    
    for(int i = sides[1] - sides[0] + 1; i <= sides[1] + sides[0] - 1; ++i) cnt++;
    
    return cnt;
}