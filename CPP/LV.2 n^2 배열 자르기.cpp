#include <string>
#include <vector>
using namespace std;

typedef long long ll;

vector<int> solution(int n, ll left, ll right) {
    vector<int> v;
    
    for (ll i = left; i <= right; ++i) {
        ll num = i / n;
        ll tmp = i % n;
        
        v.push_back(num < tmp ? tmp + 1 : num + 1);
    }
    
    return v;
}