#include <string>
#include <vector>

using namespace std;

int a = 6;

int GCD(int a, int n) { 
	return (a % n == 0 ? n : GCD(n, a % n));
}

int solution(int n) {
    int num = GCD(a, n);
    
    return (num * (a / num) * (n / num)) / a;
}