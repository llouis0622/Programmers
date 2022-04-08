#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    int ans = 0;

    sort(citations.begin(), citations.end(), greater<>());

    for(int i = 0; i < citations.size(); ++i) {
        if(citations[i] >= i + 1) ans = i + 1;
    }

    return ans;
}