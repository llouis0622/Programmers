#include <cmath>

using namespace std;

int solution(int n) {
    int num = 0;
    
    if (n % 2)
        for (int i = n; i > 0; i -= 2)
            num += i;
    
    else
        for (int i = n; i > 0; i -= 2)
            num += pow(i, 2);
    
    return num;
}