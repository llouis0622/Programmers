#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> ans;
    
    for(int i = 1; i <= n; i+=2) {
        ans.push_back(i);
        
        if(i > n) break;
    }
    
    return ans;
}