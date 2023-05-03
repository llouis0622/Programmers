#include <string>

using namespace std;

int solution(int a, int b) {
    return stoi(to_string(a) + to_string(b)) >= stoi(to_string(b) + to_string(a)) ? stoi(to_string(a) + to_string(b)) : stoi(to_string(b) + to_string(a));
}