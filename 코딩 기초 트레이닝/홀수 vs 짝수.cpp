#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int even = 0, odd = 0;
    
    for (int i = 0; i < num_list.size(); ++i) {
        if (i % 2 == 0) even += num_list[i];
        else odd += num_list[i];
    }
    
    if (odd >= even) return odd;
    else return even;
}