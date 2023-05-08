#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string s;
    cin >> s;
    
    for (auto i : s)
        cout << i << endl;
    
    return 0;
}