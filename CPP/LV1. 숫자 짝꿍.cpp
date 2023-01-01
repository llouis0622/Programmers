#include <string>
#include <vector>
#include <map>

using namespace std;

map<char, int> A;
map<char, int> B;

string solution(string X, string Y) {
    string ans="";
    
    for(int i = 0; i < X.size(); ++i) A[X[i]]++;

    for(int i = 0; i < Y.size(); ++i) B[Y[i]]++;
    
    for(int i = 9; i >= 0; --i) {
        int tmp = min(A[i + '0'], B[i + '0']);

        for(int j = 0; j < tmp; ++j) ans += i + '0';
    }
    
    if(ans == "") return "-1";
    else if(ans[0] == '0') return "0";
    else return ans;
}