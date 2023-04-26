#include <cmath>
#include <cstdlib>

using namespace std;

int solution(int a, int b) {
    return ((a % 2 && b % 2) ? pow(a, 2) + pow(b, 2) : (a % 2 || b % 2) ? 2 * (a + b) : abs(a - b));
}