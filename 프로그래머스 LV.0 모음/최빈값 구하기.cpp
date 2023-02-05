#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    vector<int> v(1001);
    
    int num = 0;
    int idx = 0;
    int cnt = 0;
    
    for(int i = 0; i < array.size(); ++i) {
        v[array[i]]++;
    }
    
    for(int i = 0; i < v.size(); ++i) {
        if(v[i] > num) {
            num = v[i];
            idx = i;
        }
    }
    
    for(int i = 0; i < v.size(); ++i) {
        if(v[i] == num) cnt++;
    }
    
    if(cnt > 1) return -1;
    
    return idx;
}