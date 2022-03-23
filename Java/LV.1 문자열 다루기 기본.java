class Solution {
    public boolean solution(String s) {
        if(s.length() != 4 && s.length() != 6) return false;
        // 문자열 길이가 4 or 6인지 확인

        for(int i=0 ; i<s.length() ; i++) {
            if(s.charAt(i) < '0' || s.charAt(i) > '9') return false;
        }
        // 숫자로만 구성되어 있지 않으면 false

        return true;
    }
}