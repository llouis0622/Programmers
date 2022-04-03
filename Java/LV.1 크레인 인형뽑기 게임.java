public import java.util.*;

class Solution {
    public int solution(int[][] board, int[] moves) {
        Stack<Integer> stack = new Stack<>();
        
        int ans = 0;
        
        for(int i = 0; i < moves.length; ++i) {
            for(int j = 0; j < board.length; ++j) {
                if(board[j][moves[i] - 1] != 0) {
                    if(stack.isEmpty()) stack.push(board[j][moves[i] - 1]);
                    else {
                        if(stack.peek() == board[j][moves[i] - 1]) {
                            stack.pop();
                            ans += 2;
                        } else stack.push(board[j][moves[i] - 1]);
                    }
                    
                    board[j][moves[i] - 1] = 0;
                    
                    break;
                }
            }
        }
        
        return ans;
    }
}