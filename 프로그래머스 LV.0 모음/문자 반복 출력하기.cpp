#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string vtr = "";
    
    for(auto i : my_string) {
        for(int j = 0; j < n; j++) {
            vtr.push_back(i);
        }
    }
    
    return vtr;
}