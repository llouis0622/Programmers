import java.util.*;

class Solution {
    public int[] solution(String[] id_list, String[] report, int k) {
        HashMap<String, Integer> find = new HashMap<>();
        HashMap<String, HashSet<String>> search = new HashMap<>();
        // Key, Value로 나누어 유저 신고를 처리하기 위해 HashMap 사용, 여러번 신고한 것(중복)들도 하나로 처리하기 때문에 Map으로 풀이
        
        int[] cnt = new int[id_list.length];
        // 모든 처리 이후 결과 메일 수도 각 유저 수와 같음
        
        for(int i = 0 ; i < id_list.length ; i++) {
            search.put(id_list[i], new HashSet<>());
            find.put(id_list[i], i);
        }
        // 유저 이름을 넣어 HashMap을 초기화
        
        for(String i : report) {
            String[] str = i.split(" ");
        	String A = str[0];
            String B = str[1];
            
        	search.get(B).add(A);
        }
        // report 값이 '이름 이름'으로 들어오므로 분리하여 대입
        
        for(int i = 0 ; i < id_list.length ; i++) {
            HashSet<String> arr = search.get(id_list[i]);

            if(arr.size() >= k) {
                for(String j : arr) {
                    cnt[find.get(j)]++;
                }
            }
        }
        // 배열 크기도 유저 크기와 같기 때문에 지정해준 후 search를 돌리면서 사이즈가 2이상인지 확인. 2이상이라면 cnt증가
        
        return cnt;
    }
}