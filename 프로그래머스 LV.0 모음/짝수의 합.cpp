#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int ans = 0;
    
    if(n % 2 == 0) {
        for(int i = n; i > 0 ; i -= 2) ans += i;
    } else {
        for(int i = n - 1; i > 0 ; i -= 2) ans += i;
    }
    
    return ans;
}