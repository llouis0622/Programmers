#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B) {
	int ans = 0;
    
	sort(A.begin(), A.end());

	sort(B.begin(), B.end());
    
	for(int i = 0; i < A.size(); ++i) {
        ans += (A[i] * B[B.size() - i - 1]);
    }
    
	return ans;
}