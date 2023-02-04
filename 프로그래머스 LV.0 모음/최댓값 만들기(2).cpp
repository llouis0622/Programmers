#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    
    int x = numbers[0] * numbers[1];
    int y = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
    
    return max(x, y);
}