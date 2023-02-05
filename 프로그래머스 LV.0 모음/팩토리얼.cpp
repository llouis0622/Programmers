#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int cnt = 1;
    
    for(int i = 1; i <= 10; ++i) {
        cnt *= i;
        
        if(n == cnt) return i;
        else if(n < cnt) return i - 1;
    }
}