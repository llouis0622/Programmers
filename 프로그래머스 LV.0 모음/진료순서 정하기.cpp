#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> v;
    vector<int> vtr(emergency);
    
    sort(vtr.rbegin(), vtr.rend());
    
    for(int i = 0; i < emergency.size(); ++i) {
        for(int j = 0; j < vtr.size(); ++j) {
            if(vtr[j] == emergency[i]) v.push_back(j + 1);
        }
    }
    
    return v;
}