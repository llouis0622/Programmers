#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int a = 0, b = 0;
    
    for(int i = 0; i < before.length(); ++i) {
        a += before[i];
        b += after[i];
    }
    
    return (a == b) ? 1 : 0;
}