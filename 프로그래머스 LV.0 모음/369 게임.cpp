#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int ans = 0;
    string str = to_string(order);
    
    for(int i = 0; i < str.length(); ++i) {
        if(str[i] == '3' || str[i] == '6' || str[i] == '9') ans++;
    }
    
    return ans;
}