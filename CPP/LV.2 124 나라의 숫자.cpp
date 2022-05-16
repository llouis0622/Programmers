#include <string>
#include <vector>
using namespace std;

string solution(int n) {
    vector<int> v;
    
    string ans;
    
    while(n != 0) {
        if(n % 3 == 0) {
            v.push_back(4);
            
            n = n / 3 - 1;
        }
        
        else {
            v.push_back(n % 3);
            
            n /= 3;
        }
    }
    
    vector<int>::reverse_iterator iter;
    
    for(iter = v.rbegin(); iter != v.rend(); ++iter) {
        ans += to_string(*iter);
    }
    
    return ans;
}