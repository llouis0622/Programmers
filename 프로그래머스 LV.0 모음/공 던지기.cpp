#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    return numbers[(k - 1) * 2 % numbers.size()];
}