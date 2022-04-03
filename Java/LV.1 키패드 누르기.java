import java.util.*;

class Solution {
    public String solution(int[] numbers, String hand) {
        String ans ="";

        int l = 10;
        int r = 12;
        
        for(int i : numbers){
            if(i == 1 || i == 4 || i == 7) {
                ans += "L";
                l = i;
                
            }else if(i == 3 || i == 6 || i == 9) {
                ans += "R";
                r = i;
                
            } else {
                if(i == 0) i += 11;

                int left = (Math.abs(i - l)) / 3 + (Math.abs(i - l)) % 3;
                int right = (Math.abs(i - r)) / 3 + (Math.abs(i - r)) % 3;

                if(left == right) {
                    if(hand.equals("left")) {
                        ans += "L";
                        l = i;
                    } else {
                        ans += "R";
                        r = i;
                    }
                } else if(left < right) {
                    ans += "L";
                    l = i;
                } else {
                    ans += "R";
                    r = i;
                }
            }
        }
        
        return ans;
    }
}