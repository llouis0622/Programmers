#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int ans = -1;
    string str = to_string(num);
    
    for(int i = 0; i < str.size(); ++i) {
        if(str[i] - '0' == k) {
            ans = i + 1;
            break;
        }
    }
    
    return ans;
}