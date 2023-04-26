#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int num = 1;
    
    if (num_list.size() > 10) {
        for (auto i : num_list)
            num += i;
        
        return num - 1;
    }
    
    else {
        for (auto i : num_list)
            num *= i;
        
        return num;
    }
}