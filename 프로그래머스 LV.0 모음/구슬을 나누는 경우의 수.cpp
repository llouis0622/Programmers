#include <string>
#include <vector>

using namespace std;



int solution(int balls, int share) {
    int x[31][31];
    
    int ans = 0;
    
    for(int i = 0; i < 31; ++i) x[i][0] = x[i][i] = 1;
    
    for(int i = 2; i < 31; ++i) {
        for(int j = 1; j < i; ++j) {
            x[i][j] = x[i - 1][j] + x[i - 1][j - 1];
        }
    }
    
    ans = x[balls][share];
    
    return ans;
}