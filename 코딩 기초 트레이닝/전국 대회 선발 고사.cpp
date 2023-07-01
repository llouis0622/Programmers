#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second) return a.first < b.first;
    
	return a.second < b.second;
}

int solution(vector<int> rank, vector<bool> attendance) {
    map<int, int> m;
    
    int num = 0;
    
    for (int i = 0; i < rank.size(); ++i) {
        if (attendance[i] == 1)
            m.insert(pair<int, int>(i, rank[i]));
        else
            m.insert(pair<int, int>(i, 101));
    }
    
    vector<pair<int, int>> v(m.begin(), m.end());
    
    sort(v.begin(), v.end(), cmp);
    
    return 10000 * v[0].first + 100 * v[1].first + v[2].first;
}