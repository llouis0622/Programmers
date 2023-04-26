#include <vector>

using namespace std;

vector<int> solution(int start, int end) {
    vector<int> v;
    
    for (int i = start; i >= end; --i)
        v.push_back(i);
    
    return v;
}