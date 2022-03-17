import java.util.*;
 
public class Solution {
    public int[] solution(int []arr) {
        int[] ans = {};
        
        ArrayList<Integer> str = new ArrayList<Integer>();
        
        for(int i=0 ; i<arr.length-1 ; i++) {
            if(arr[i] == arr[i + 1]) {
                if(i == arr.length - 2) str.add(arr[i + 1]);
                continue;
            } else {    
                str.add(arr[i]);
                
                if(i == arr.length - 2) {
                    str.add(arr[i + 1]);
                }
            }
        }
        
        ans = new int[str.size()];
        
        for(int i=0 ; i<str.size() ; i++) {
            ans[i] = str.get(i);
        }
        
        return ans;
    }
}