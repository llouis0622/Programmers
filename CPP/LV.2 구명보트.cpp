#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    
    int ans = 0;
    int idx = 0;
    
    while(people.size() > idx) {
        int num = people.back();
        
        people.pop_back();
        
        if(people[idx] + num <= limit) {
            ans++;
            idx++;
        }
        
        else ans++;
    }
    
    return ans;
}