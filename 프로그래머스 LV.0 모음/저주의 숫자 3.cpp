#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int ans = 0;
    
    for(int i = 1; i <= n; ++i) {
        while(ans % 3 == 0 || ans % 10 == 3 || ans / 10 == 3 || ans / 10 == 13) ans++;
        
        ans++;
    }
    
    return ans - 1;
}