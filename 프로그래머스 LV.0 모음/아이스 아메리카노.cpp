#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> vtr;
    
    vtr.push_back(money / 5500);
    vtr.push_back(money % 5500);
    
    return vtr;
}