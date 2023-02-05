#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int ans = 0, cnt = 0, idx = 0;
    
    while(chicken >= 10) {
        cnt = chicken / 10;
        idx = chicken % 10;
        
        chicken = cnt + idx;
        ans += (chicken - idx);
    }
    
    return ans;
}