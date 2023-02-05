#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> v;
    
    int ans = 1;
    int a = numer2 * denom1 + numer1 * denom2;
    int b = denom1 * denom2;
    
    for(int i = 1; i <= a; ++i) {
        if(a % i == 0 && b % i == 0) ans = i;
    }
    
    v.push_back(a / ans);
    v.push_back(b / ans);
    
    return v;
}