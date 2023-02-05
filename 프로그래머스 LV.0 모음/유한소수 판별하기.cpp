#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b) {
    if(a % b == 0) return b;
    
    return GCD(b, a % b);
}

int solution(int a, int b) {
    int ans = 0;
    
    b /= GCD(b, a);
    
    while(1) {
        if(b % 2 == 0) b /= 2;
        else if(b % 5 == 0) b /= 5;
        else break;
    }
    
    if(b == 1) ans = 1;
    else ans = 2;
    
    return ans;
}