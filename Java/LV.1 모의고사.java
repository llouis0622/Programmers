import java.util.*;

class Solution {
    public int[] solution(int[] answers) {
        int[] a = {1, 2, 3, 4, 5};
        int[] b = {2, 1, 2, 3, 2, 4, 2, 5};
        int[] c = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        int score_a = 0;
        int score_b = 0;
        int score_c = 0;

        for(int i = 0 ; i < answers.length ; i++) {
            if(answers[i] == a[i % 5]) score_a++;
            if(answers[i] == b[i % 8]) score_b++;
            if(answers[i] == c[i % 10]) score_c++;
        }

        int max = Math.max(score_a, Math.max(score_b, score_c));

        ArrayList<Integer> arr = new ArrayList<>();

        if(max == score_a) arr.add(1);
        if(max == score_b) arr.add(2);
        if(max == score_c) arr.add(3);

        int answer[] = new int[arr.size()];

        for(int i = 0 ; i < arr.size() ; i++) {
            answer[i] = arr.get(i);
        }

        return answer;
    }
}