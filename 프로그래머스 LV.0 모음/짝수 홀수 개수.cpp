#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> vtr;
    
    int even = 0, odd = 0;
    
    for(int i = 0; i < num_list.size(); i++) num_list[i] % 2 == 0 ? even++ : odd++;
    
    vtr.push_back(even);
    vtr.push_back(odd);
    
    return vtr;
}