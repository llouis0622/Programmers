import java.util.ArrayList;

public class Solution {
    public int solution(int[] nums) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        
        int ans = 0;
        
        for(int i=0 ; i<nums.length ; i++) {
        	if(i + 2 >= nums.length) break;
            
        	for(int j=i+1 ; j<nums.length ; j++) {
        		for(int k=j+1 ; k<nums.length ; k++) {
        			list.add(nums[i] + nums[j] + nums[k]);
        		}
        	}
        }

        for(Integer i : list) {
        	int cnt = 2;
        	ans++;
            
        	while(cnt < i) {
                if(i % cnt == 0) {
        			ans--;
        			break;
        		}
                
        		cnt++;
        	}
        }
        return ans;
    }
}