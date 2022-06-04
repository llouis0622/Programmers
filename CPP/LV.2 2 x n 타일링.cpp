#include <string>
#include <vector>
using namespace std;

vector<int> v(2);

int solution(int n) {   
    v[0] = 1;
    v[1] = 1;
    
    for(int i = 2; i <= n; ++i) {
        v.push_back((v[i - 1] + v[i - 2]) % 1000000007);
    }
    
    return v[n];
}