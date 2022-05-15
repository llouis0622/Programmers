using namespace std;
 
int solution(int n) {
    int ans = 1;
    
    for(int i = 1; i < n; ++i) {
        int cnt = i;
        
        for(int j = i + 1; j < n; ++j) {
            cnt += j;
            
            if(cnt == n) ans++;
            
            else if(cnt > n) break;
        }
    }
        
    return ans;
}