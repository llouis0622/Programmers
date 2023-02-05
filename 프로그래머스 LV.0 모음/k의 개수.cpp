#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int cnt = 0;
    
    for(int x = i; x <= j; ++x) {
        int idx = x;
        
        while(1) {
            if(idx == 0) break;
            if(idx % 10 == k) cnt++;
            
            idx /= 10;
        }
    }
    
    return cnt;
}