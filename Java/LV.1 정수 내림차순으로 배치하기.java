import java.util.*;

class Solution {
    public long solution(long n) {
        String str = Long.toString(n);
        String[] arr = str.split("");
        Arrays.sort(arr, Collections.reverseOrder());

        str = String.join("", arr);

        long ans = Long.parseLong(str);
 
        return ans;
    }
}