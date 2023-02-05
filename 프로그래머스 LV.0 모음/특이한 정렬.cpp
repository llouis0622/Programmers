#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool bl(pair<int, int> x, pair<int, int> y) {
	if (x.first == y.first) return x.second > y.second;
    
	return x.first < y.first;
}

vector<int> solution(vector<int> numlist, int n) {
    vector<int> vtr;
    vector<pair<int, int>> v;
    
    sort(numlist.begin(), numlist.end(), greater<>());
    
    for(int i = 0; i < numlist.size(); ++i) v.push_back(make_pair(abs(numlist[i] - n), numlist[i]));
    
    sort(v.begin(), v.end(), bl);
    
    for(int i = 0; i < v.size(); ++i) vtr.push_back(v[i].second);
    
    return vtr;
}