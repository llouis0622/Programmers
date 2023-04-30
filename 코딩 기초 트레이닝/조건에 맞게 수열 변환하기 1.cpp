#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> v;
    
    for (auto i : arr) {
        if (i >= 50 && (i % 2)) v.push_back(i / 2);
        else if (i < 50 && !(i % 2)) v.push_back(i * 2);
        else v.push_back(i);
    }
    
    return v;
}