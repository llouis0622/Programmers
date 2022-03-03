class Solution {
    public int[] solution(int n, int m) {
        int[] res = new int[2];
        
        res[0] = GCD(n, m);
		res[1] = n * m / res[0];
        
		return res;
	}
    
	static int GCD(int a, int b) {
		while(b != 0) {
			int r = a % b;
            
			a = b;
			b = r;
		}
		return a;
	}
}