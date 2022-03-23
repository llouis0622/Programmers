public class Solution {
    public int solution(int n) {
		String num = "";
        // 숫자 자체를 문자열로 해석하기 위함
		
		while(n >= 3) {
			num += n % 3;
			n /= 3;
		}
        // 3진법 변환을 해가면서 나머지는 스트링 형태로 변환, 몫는 재연산
		num += n;
        // 스트링 형태로 진법 나열
		
		return Integer.parseInt(num, 3);
	}
}