#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int ans = 0, idx = 0, max = 0;
    
    for(int i = 0; i < sides.size(); i++) {
        if(max < sides[i]) {
            max = sides[i];
            idx = i;
        }
    }
    
    max = 0;
    
    for(int i = 0; i < sides.size(); i++) {
        if(idx == i) continue;
        max += sides[i];
    }
    
    if(sides[idx] < max) ans = 1;
    else ans = 2;
    
    return ans;
}