import java.util.*;

class Solution {
    public int[] solution(int[] arr, int divisor) {
        int[] ans = {};
        
        ArrayList<Integer> list = new ArrayList<Integer>();
        
        for(int i = 0 ; i < arr.length ; i++) {
            if(arr[i] % divisor == 0) list.add(arr[i]);
        }
        
        if(list.isEmpty()) list.add(-1);
        
        ans = new int[list.size()];
        
        for(int i = 0 ; i < list.size() ; i++) {
            ans[i] = list.get(i);
        }
        
        Arrays.sort(ans);
        
        return ans;
    }
}