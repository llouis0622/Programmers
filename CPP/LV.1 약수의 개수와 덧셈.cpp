#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int ans = 0;

    for(int i = left; i <= right; ++i) {
        if(sqrt(i) - (int)sqrt(i) == 0) ans -= i;
        else ans += i;
    }

    return ans;
}