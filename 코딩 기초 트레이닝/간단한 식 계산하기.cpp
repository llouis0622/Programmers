#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int a = 0, b = 0;
    
    string op = "";
    
    stringstream ss(binomial);
    ss >> a >> op >> b;
    
    if (op == "+") return a + b;
    else if (op == "-") return a - b;
    else return a * b;
}