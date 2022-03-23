class Solution {
  public int solution(int n) {
    int answer = 0;
    
    for(int i = 1 ; i <= n ; i++) {
      if(n % i == 0) answer += i;
    }
    // 약수를 구하기 위해 1부터 시작하면서 더함
    
    return answer;
  }
}