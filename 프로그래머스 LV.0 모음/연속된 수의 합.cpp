#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> v;
    
    int cnt = num * (num + 1) / 2, idx = (total - cnt) / num;
    
    for(int i = 1; i <= num; ++i) v.push_back(i + idx);
    
    return v;
}