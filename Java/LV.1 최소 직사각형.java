import java.util.*;

class Solution {
    public int solution(int[][] sizes) {
        int a = 0;
        int b = 0;
        
        for(int i = 0; i < sizes.length; i++) {
            int x = Math.max(sizes[i][0],sizes[i][1]);
            int y = Math.min(sizes[i][0],sizes[i][1]);
            
            a = Math.max(a, x);
            b = Math.max(b, y);
        }
        return a * b;
    }
}