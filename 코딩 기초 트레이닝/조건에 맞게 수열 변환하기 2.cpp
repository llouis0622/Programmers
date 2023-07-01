#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    vector<int> v(arr.begin(), arr.end());
    
    int num = 0;
    
    while (1) {
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] >= 50 && v[i] % 2 == 0) v[i] /= 2;
            else if (v[i] < 50 && v[i] % 2 == 1) v[i] = v[i] * 2 + 1;
        }
        
        if (arr == v) break;
        else {
            num++;
            arr = v;
        }
    }
    
    return num;
}