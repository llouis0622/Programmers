#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int ans = 0, num = 0;
    
    for(int i = 0; i < my_string.size(); ++i) {
        if(isdigit(my_string[i])) num = num * 10 + my_string[i] - '0';
        
        else {
            ans += num;
            num = 0;
        }
    }
    
    ans += num;
    
    return ans;
}