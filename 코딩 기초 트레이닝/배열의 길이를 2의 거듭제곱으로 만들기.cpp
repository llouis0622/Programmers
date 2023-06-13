#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> v = arr;
    
    int num = 1;
    
    while (num < arr.size())
        num *= 2;
    
    while (v.size() < num)
        v.push_back(0);
    
    return v;
}