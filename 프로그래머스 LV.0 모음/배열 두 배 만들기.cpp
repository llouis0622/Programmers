#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> vtr;
    
    for(int i = 0; i < numbers.size(); i++) vtr.push_back(numbers[i] * 2);
    
    return vtr;
}