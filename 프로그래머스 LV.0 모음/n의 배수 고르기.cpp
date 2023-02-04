#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> v;
    
    for(int i = 0; i < numlist.size(); ++i) {
        if(numlist[i] % n == 0) v.push_back(numlist[i]);
    }
    
    return v;
}