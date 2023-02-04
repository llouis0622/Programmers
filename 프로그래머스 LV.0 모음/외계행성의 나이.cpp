#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string str = to_string(age);
    string ans = "";
    
    for(int i = 0; i < str.size(); ++i) ans += (str[i] + 49);
    
    return ans;
}