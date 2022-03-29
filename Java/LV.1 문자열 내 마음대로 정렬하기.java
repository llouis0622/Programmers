import java.util.*;

class Solution {
    public String[] solution(String[] strings, int n) {
        String[] ans = {};
        
        ArrayList<String> arr = new ArrayList<>();
        
        for(int i = 0; i < strings.length; i++) {
            arr.add("" + strings[i].charAt(n) + strings[i]);
        }
        
        Collections.sort(arr);
        
        ans = new String[arr.size()];
        
        for(int i = 0; i < arr.size(); i++) {
            ans[i] = arr.get(i).substring(1, arr.get(i).length());
        }
        
        return ans;
    }
}