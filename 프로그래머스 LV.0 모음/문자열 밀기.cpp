#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int ans = 0;
    bool bl = false;
    
    if(A == B) return 0;
    
    for(int i = 0; i < A.size() - 1; ++i) {
        char c = A[A.size() - 1];
        
        A = A.substr(0, A.size() - 1);
        A = c + A;
        ans++;
        
        if(A == B) {
            bl = true;
            break;
        }
    }
    
    if(bl) return ans;
    else return -1;
}