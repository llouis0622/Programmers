#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s, str;
    cin >> s;
    
    
    for (auto i : s) {
        if (i >= 65 && i <= 91) str.push_back(i + 32);
        else str.push_back(i - 32);
    }
    
    cout << str;
    
    return 0;
}