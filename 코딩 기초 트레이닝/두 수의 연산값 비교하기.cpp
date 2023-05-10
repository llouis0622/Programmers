#include <string>

using namespace std;

int solution(int a, int b) {
    string s = to_string(a) + to_string(b);
    int num = stoi(s);
    
    return (num > 2 * a * b) ? num : 2 * a * b;
}