#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    (n % 2) ? cout << n << " is odd" : cout << n << " is even";
}