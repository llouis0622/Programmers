import java.util.*;

class Solution {
    public int[] solution(int[] numbers) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        
        for(int i = 0 ; i < numbers.length ; i++) {
            for(int j = i + 1 ; j < numbers.length ; j++) {
                int num = numbers[i] + numbers[j];
                
                if(list.indexOf(num) < 0) list.add(num);
            }
        }
        
        int[] ans = new int[list.size()];
        
        for(int i = 0 ; i < list.size() ; i++) {
            ans[i] = list.get(i);
        }
        
        Arrays.sort(ans);

        return ans;
    }
}