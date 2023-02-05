#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int cnt = 0;
    
    for(int i = 0; i < array.size(); ++i) {
        while(1) {
            if(array[i] == 0) break;
            if(array[i] % 10 == 7) cnt++;
            
            array[i] /= 10;
        }
    }
    
    return cnt;
}