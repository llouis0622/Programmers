class Solution {
    public String solution(int a, int b) {
        String ans = "";
        String[] day = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };
        int[] date = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int N = 0;
        
        for(int i=0 ; i<a-1 ; i++) {
            N += date[i];
        }
 
        N += (b - 1);
        ans = day[N % 7];
 
        return ans;
    }
}