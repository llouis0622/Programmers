#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int num = 0;
    
    for (auto i : numbers) {
        if (num > n) break;
        
        num += i;
    }
    
    return num;
}