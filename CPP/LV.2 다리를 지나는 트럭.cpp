#include <queue>
#include <vector>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int ans = 0;
    int num = 0;
    int sum = 0;
    
    queue<int> q;
    
    while(1) {
        if (num == truck_weights.size()) {
            ans += bridge_length;
            
            break;  
        }
        
        ans++;
        
        int tmp = truck_weights[num];
        
        if (q.size() == bridge_length) {
            sum -= q.front();
            
            q.pop();  
        }
        
        if (sum + tmp <= weight) {
            sum += tmp;
            
            q.push(tmp);
            
            num++;
        }
        else q.push(0);
    }
   
    return ans;
}