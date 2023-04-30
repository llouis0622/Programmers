#include <string>

using namespace std;

int solution(int n, string control) {
    for (int i = 0; i < control.length(); ++i) {
        if (control[i] == 'w') n++;
        else if (control[i] == 's') n--;
        else if (control[i] == 'd') n += 10;
        else n -= 10;
    }
    
    return n;
}