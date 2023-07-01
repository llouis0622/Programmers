#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> v;
    queue<int> q;
    
    for (int i = 0; i < speeds.size(); ++i)
        q.push(i);
    
    while (!q.empty()) {
        int num = 0;
        
        for(int i = 0; i < speeds.size(); ++i)
            progresses[i] += speeds[i];
        
        while (!q.empty() && progresses[q.front()] >= 100) {
            num++;
            
            q.pop();
        }
        
        if (num != 0) v.push_back(num);  
    }
    
    return v;
}
