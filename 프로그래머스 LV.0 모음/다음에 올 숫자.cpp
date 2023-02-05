#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    if(common[common.size() - 1] - common[common.size() - 2] == common[common.size() - 2] - common[common.size() - 3]) return common[common.size() - 1] + common[common.size() - 1] - common[common.size() - 2];
    
    else if(common[common.size() - 1] / common[common.size() - 2] == common[common.size() - 2] / common[common.size() - 3]) return common[common.size() - 1] * (common[common.size() - 1] / common[common.size() - 2]);
}