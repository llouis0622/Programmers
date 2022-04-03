import java.util.*;

class Solution {
    public String solution(String new_id) {
        String ans = new_id.toLowerCase();
        ans = ans.replaceAll("[^-_.a-z0-9]", "");
        ans = ans.replaceAll("[.]{2,}", ".");
        ans = ans.replaceAll("^[.]|[.]$", "");
        
        if(ans.equals(""))  ans += "a";

        if(ans.length() >= 16) {
            ans = ans.substring(0, 15);
            ans = ans.replaceAll("[.]$","");
        }

        if(ans.length() <= 2) {
            while(ans.length() < 3) {
                ans += ans.charAt(ans.length() - 1);
            }
        }

        return ans;
    }
}