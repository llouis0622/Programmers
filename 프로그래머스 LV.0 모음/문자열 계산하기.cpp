#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int ans = 0;
    stringstream ss(my_string);
    ss >> ans;
    
    int n;
    char c;
    
    while(ss >> c >> n) {
        if(c == '+') ans += n;
        else ans -= n;
    }
    
    return ans;
}