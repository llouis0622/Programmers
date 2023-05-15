#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int num = 0;
    
    for (auto i : num_list) {
        while (1) {
            if (i == 1) break;
            
            if (i % 2 == 0) {
                i = i / 2;
                num++;
            }
        
            else {
                i = (i - 1) / 2;
                num++;
            }
        }
    }
    
    return num;
}