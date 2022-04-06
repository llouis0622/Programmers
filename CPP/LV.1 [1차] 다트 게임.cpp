#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int ans = 0;
    int num = 0;
    int cnt = 0;
    
    for(int i = 0; i < dartResult.size(); ++i) {   
        if(dartResult[i] >= '0' && dartResult[i] <= '9') {
            num = cnt;
            
            if(dartResult[i + 1] == '0') {
                cnt = 10;
                i++;
            } else cnt = dartResult[i] - '0';
        } else if(dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T') {
            if(dartResult[i] == 'D') cnt = pow(cnt, 2);
            else if(dartResult[i] == 'T') cnt = pow(cnt, 3);
            
            if(dartResult[i + 1] == '*') {
                ans -= num;
                num *= 2;
                cnt *= 2;
                i++;
                ans += num;
            } else if(dartResult[i + 1] == '#') {
                cnt *= -1;
                i++;
            }
            ans += cnt;
        }
    }
    return ans;
}