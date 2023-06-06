#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> v;
    
    for (auto& i : intStrs) {
        int num = stoi(i.substr(s, l));
        
        if (num > k) v.push_back(num);
    }
    
    return v;
}