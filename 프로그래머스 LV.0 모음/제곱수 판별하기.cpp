#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    for(int i = 1; i <= 1000; ++i) {
        if(i * i != n) continue;
        else if(i * i == n) return 1;
    }
    
    return 2;
}