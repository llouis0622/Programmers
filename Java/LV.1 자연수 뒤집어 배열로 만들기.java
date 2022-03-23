class Solution {
    public int[] solution(long n) {
        String a = n + "";
        int[] ans = new int[a.length()];
        int cnt = 0;
        
        while(n > 0) {
            ans[cnt] = (int)(n % 10);
            n /= 10;
            cnt++;
        }
        
        return ans;
    }
}