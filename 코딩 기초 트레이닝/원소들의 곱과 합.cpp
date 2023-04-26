#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int n = 1, m = 0;
    
    for (auto i : num_list) {
        n *= i;
        m += i;
    }
    
    return (n < pow(m, 2));
}