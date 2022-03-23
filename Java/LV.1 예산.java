import java.util.*;

class Solution {
    public int solution(int[] d, int budget) {
        int cnt = 0;
        
        Arrays.sort(d);
        // 작은 수부터 예산에서 제거해야 하므로 정렬 필수
        
        for(int i = 0 ; i < d.length ; i++) {
            budget -= d[i];
            // 예산에서 정렬 길이만큼 돌면서 빼주기
            
            if(budget < 0) break;
            // 예산이 -가 되면 바로 스탑
            
            cnt++;
        }
        
        return cnt;
    }
}