#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> s, int K) {
    int ans = 0;
    
    priority_queue <int, vector<int>, greater<int>> pq(s.begin(), s.end());
    
    while(pq.size() > 1 && pq.top() < K) {
        int A = pq.top();
        
        pq.pop();
        
        int B = pq.top();
        
        pq.pop();
        
        int C = A + 2 * B;
        
        pq.push(C);
        
        ans++;
    }
    
    if(pq.top() < K) return -1;
    
    else return ans;
}