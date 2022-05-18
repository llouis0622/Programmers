#include <iostream>
#include <string>
using namespace std;

string solution(string number, int k) {
	string ans = "";
    
    int idx = -1;
    
    for (int i = 0; i < number.length() - k; ++i) {
        char tmp = 0;
        
        for (int j = idx + 1; j <= k + i; ++j) {
            if (tmp < number[j]) {
                tmp = number[j];
                idx = j;
            }
        }
        
        ans += tmp;
    }
    
	return ans;
}