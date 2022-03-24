class Solution {
    public long solution(int price, int money, int count) {
        long sum = 0;
        
        for(int i = 1 ; i < count + 1 ; i++) {
            sum += price * i;
        }
        
        long result = (sum > money) ? sum - money : 0;
        
        return result;
    }
}