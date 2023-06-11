#include <string>

using namespace std;

int solution(string myString, string pat) {
    int ans = 0, num = pat.size();
    
    for (int i = 0; i <= myString.size() - num; ++i)
        if (myString.substr(i, num) == pat) ans++;
    
    return ans;
}