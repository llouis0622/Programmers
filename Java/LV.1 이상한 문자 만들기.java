class Solution {
    public String solution(String s) {
        String ans = "";
        
        int cnt = 0;
        
        String[] arr = s.split("");

        for(String str : arr) {
            cnt = str.contains(" ") ? 0 : cnt + 1;
            
            ans += cnt % 2 == 0 ? str.toLowerCase() : str.toUpperCase(); 
        }
        
        return ans;
    }
}