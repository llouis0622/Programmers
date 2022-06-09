#include <iostream>
using namespace std;

int solution(int n, int a, int b) {
    int idx;
    
    for (idx = 1; idx <= n; ++idx) {
        if (a % 2 == 1) a++;
        if (b % 2 == 1) b++;
        
        a /= 2;
        b /= 2;
        
        if (a == b) break;
    }
    
    return idx;
}