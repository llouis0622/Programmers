long long solution(int n) {
    long long arr[2001];
    long long ans = 0;
    
    arr[0] = 1;
    arr[1] = 2;
    
    for(int i = 2; i <= n; ++i) {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 1234567;
    }
    
    ans = arr[n - 1];
    
    return ans;
}