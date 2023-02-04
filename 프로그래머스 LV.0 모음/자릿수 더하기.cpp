#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int cnt = 0;
    
    for(int i = n; i > 0; i/=10) {
        cnt = i % 10 + cnt;
    }
    
    return cnt;
}