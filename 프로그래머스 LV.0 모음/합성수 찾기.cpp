#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int ans = 0;
    
    for(int i = 2; i <= n; ++i) {
        for(int j = 2; j <= int(sqrt(double(i))); ++j) {
            if(i % j == 0) {
                ans++;
                break;
            }
        }
    }
    
    return ans;
}