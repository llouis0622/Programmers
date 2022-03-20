class Solution {
    public int[] solution(int[] arr) {
        if(arr.length == 1) return new int[]{-1};
        
        int temp = 0; 
        
        for(int i = 0 ; i < arr.length ; i++) {
            if(arr[temp] > arr[i]) temp = i;
        }
        
        int[] ans = new int[arr.length - 1];
        int cnt = 0;
        
        for(int i = 0 ; i < arr.length ; i++) {
            if(i == temp) continue;
            
            ans[cnt++] = arr[i];
        }
        
        return ans;
    }
}