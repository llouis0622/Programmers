#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> v;
    
    v.push_back(n);
    
    while (1) {
        if (n % 2 == 0) {
            v.push_back(n / 2);
        
            n = n / 2;
        }
        
        else {
            v.push_back(3 * n + 1);
        
            n = 3 * n + 1;
        }
    
        if (n == 1) return v;
    }
}