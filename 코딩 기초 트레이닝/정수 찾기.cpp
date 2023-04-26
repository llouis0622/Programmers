#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    for (auto i : num_list)
        if (i == n) return 1;
    
    return 0;
}