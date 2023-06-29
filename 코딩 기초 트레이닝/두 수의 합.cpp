#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string a, string b) {
    string s;
    int A = a.size() - 1, B = b.size() - 1, C = 0;
    
    while (A >= 0 || B >= 0 || C > 0) {
        int num = C;
        
        if (A >= 0) {
            num += (a[A] - '0');
            A--;
        }
        
        if (B >= 0) {
            num += (b[B] - '0');
            B--;
        }
        
        C = num / 10;        
        s += to_string(num % 10);
    }
    
    reverse(s.begin(), s.end());
    
    return s;
}