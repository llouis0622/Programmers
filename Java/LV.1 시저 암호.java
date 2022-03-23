class Solution {
    public String solution(String s, int n) {
		String ans = "";
		
		for(int i = 0 ; i < s.length() ; i++) {
			char ch = s.charAt(i);
			
			if(ch >= 97 && ch <= 122) {
				if(n + ch > 122) ans += (char)(n + ch - 26);
				else ans += (char)(n + ch);
			} else if(ch >= 65 && ch <= 90) {
				if(n + ch > 90) ans += (char)(n + ch - 26);
				else ans += (char)(n + ch);
			} else ans += (char)ch;
		}
		
		return ans;
    }
}