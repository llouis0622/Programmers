class Solution {
    public int solution(int n) {
        int answer = 0;
        int arr[] = new int[n+1];
        arr[0] = 0;
        arr[1] = 0;

        for(int i=2 ; i<=n ; i++) { 
            arr[i] = i;
        }

        for(int i=2 ; i<=(int)Math.sqrt(n) ; i++) {
            if(arr[i] == 0) continue;
            
            for(int j=2*i ; j<=n ; j+=i) {
                arr[j] = 0;
            }
        }

        for(int i=0 ; i<=n ; i++ ) {
            if(arr[i] != 0) {
                answer++;
            }
        }

        return answer;
    }
}