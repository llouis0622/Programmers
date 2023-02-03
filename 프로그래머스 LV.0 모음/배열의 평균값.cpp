#include <numeric>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    return  static_cast<double>(accumulate(numbers.begin(), numbers.end(), 0)) / numbers.size();
}