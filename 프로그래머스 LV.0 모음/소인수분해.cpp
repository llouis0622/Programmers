#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> v;
    int idx = n;
    
    for (int i = 2; i * i <= n; ++i) {
		while(idx % i == 0) {
            idx /= i;
            v.push_back(i);
        }
	}
    
    if(idx != 1) v.push_back(idx);
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
	return v;
}