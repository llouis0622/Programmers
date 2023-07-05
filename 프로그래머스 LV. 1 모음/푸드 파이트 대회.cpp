#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string l = "", r = "";
    
    for (int i = 0; i < food.size() ; ++i) {
        if (food[i] / 2) {
            for (int j = 0; j < food[i] / 2; ++j) {
                l = l + to_string(i);
                r = to_string(i) + r;
            }
        }
    }
    
    return l + "0" + r;
}