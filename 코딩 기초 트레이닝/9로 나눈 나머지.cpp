#include <string>

using namespace std;

int solution(string number) {
    int num = 0;
    
    for (int i = 0; i < number.size(); ++i)
        num += number[i] - '0';
    
    return num % 9;
}