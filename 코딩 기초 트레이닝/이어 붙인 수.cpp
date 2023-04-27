#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string odd, even;
    
    for (auto i : num_list)
        (i % 2) ? even += to_string(i) : odd += to_string(i);
    
    return stoi(even) + stoi(odd);
}