import java.util.*;

class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        int[] ans = {0, 0};
        int cnt = 0;

        Arrays.sort(lottos);
        
        for(int i = 0; i < 6; ++i) {
            if(lottos[i] != 0) break;
            
            cnt++;
        }

        Arrays.sort(win_nums);
        
        for(int i = 0; i < 6; ++i) {
            for(int j = cnt; j < 6; ++j) {
                if(win_nums[i] != lottos[j]) continue;
                
                ans[0]++;
                ans[1]++;
            }
        }

        ans[0] += cnt;

        for(int i = 0; i < 2; i++) {
            if(ans[i] == 6) ans[i] = 1;
            else if(ans[i] == 5) ans[i] = 2;
            else if(ans[i] == 4) ans[i] = 3;
            else if(ans[i] == 3) ans[i] = 4;
            else if(ans[i] == 2) ans[i] = 5;
            else ans[i] = 6;
        }

        return ans;
    }
}