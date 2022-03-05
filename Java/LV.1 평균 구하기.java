class Solution {
    public double solution(int[] arr) {
        double ans = 0;
        double sum = 0;
        
        for(int i=0 ; i<arr.length ; i++){
            sum += arr[i];
        }
        
        ans = sum /arr.length; 
        
        return ans;
    }
}