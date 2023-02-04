#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> v;
    
    int num = 0, idx = 0;
    
    for(int i = 0; i < array.size(); ++i) {
        if(array[i] > num) {
            num = array[i];
            idx = i;
        }
    }
    
    v.push_back(num);
    v.push_back(idx);
    
    return v;
}