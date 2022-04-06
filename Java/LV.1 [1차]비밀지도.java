class Solution {
    public String[] solution(int n, int[] arr1, int[] arr2) {
        int[] map = new int[n];
        String[] ans = new String[n];
        
        for(int i = 0; i < n; ++i) {
            map[i] = arr1[i] | arr2[i];
        }
        
        for(int i = 0; i < map.length; ++i) {
            String str = Integer.toBinaryString(map[i]);
            
            if(str.length() < n) {
                int num = n - str.length(); 
                
                for(int j = 0; j < num; ++j) {
                    str = "0" + str;
                }
            }
            
            str = str.replaceAll("1", "#");
            str = str.replaceAll("0", " ");
            ans[i] = str;
        }
        return ans;
    }
}