#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> v(52, 0);
    
    for (auto i : my_string) {
        if (i >= 'A' && i <= 'Z')
            v[i - 'A']++;
        else
            v[i - 'a' + 26]++;
    }
    
    return v;
}