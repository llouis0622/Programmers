#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int ans = 0;
    
    while(n >= a) {
        int x = n / a * b;
        
        n %= a;
        ans += x;
        n += x;
    }
    
    return ans;
}