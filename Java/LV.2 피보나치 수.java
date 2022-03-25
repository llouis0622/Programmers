class Solution {
    public int solution(int n) {
        int ans = 0;
        int a = 1;
        int b = 1;
        
        for(int i = 3 ; i <= n ; i++) {
            ans = (a + b) % 1234567;
            a = b;
            b = ans;
        }
        
        return ans;
    }
}