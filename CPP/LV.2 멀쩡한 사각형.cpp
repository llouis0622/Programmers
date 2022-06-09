using namespace std;

typedef long long ll;

int gcd(int a, int b) {
	while(b != 0) {
		int tmp = a % b;
        
		a = b;
		b = tmp;
	}
    
	return a;
}

long long solution(int w, int h) {
    
    ll ans = (ll)(w) * (ll)(h) - (w + h - gcd(w, h));
    
    return ans;
}