#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int num = 0;
    
    for (int i = 0; i < included.size(); ++i)
        if (included[i]) num += i * d + included[i] * a;
    
    return num;
}