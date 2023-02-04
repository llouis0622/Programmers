#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int a = hp / 5, b = (hp % 5) / 3, c = ((hp % 5) % 3) / 1;
    
    return a + b + c;
}