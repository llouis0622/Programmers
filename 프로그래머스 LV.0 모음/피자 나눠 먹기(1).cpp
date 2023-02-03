#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    if(n % 7 == 0) return n / 7;
    else if(n < 7) return 1;
    else return n / 7 + 1;
}