#include <string>
#include <vector>
using namespace std;

#define NUM 1000000007

long long arr[5001];

int solution(int n) {
    if(n % 2 == 1) return 0;
    
    arr[0] = 1;
    arr[2] = 3;
    
    for(int i = 4; i <= n; i += 2) {
        arr[i] = arr[i - 2] * 3;
        
        for(int j = 0; j <= i - 4; j += 2) {
             arr[i] += (arr[j] * 2) % NUM;
        }
        
        arr[i] %= NUM;
    }
    
    return arr[n] % NUM;
}