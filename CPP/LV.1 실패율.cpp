#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> ans;
    vector<double> vtr;
    double num = stages.size();

    for(int i = 1; i <= N; ++i) { // 스테이지 반복
        double cnt = 0;

        for(int j = 0; j < stages.size(); ++j) { // 스테이지(인덱스) 반복
            if(stages[j] == i) cnt++;
        }

        if(cnt == 0) vtr.push_back(0); // 해당 스테이지에 도달한 사람이 없으면 0
        else vtr.push_back(cnt / num); // 도달한 사람이 있으면 비율 계산 후 넣기

        num -= cnt; // 앞부분에서 통과를 못하면 인원도 감소
    }

    for(int i = 0; i < N; ++i) { // 실패율을 내림차순으로 정렬하기 위함
        auto res = max_element(vtr.begin(), vtr.end()); // auto로 자동으로 형 할당 후 큰 값부터 리턴
        ans.push_back(res - vtr.begin() + 1); // ans에 스테이지 번호 넣기
        *res = -1; // 해당 스테이지 실패율을 가장 낮게 설정
    }

    return ans;
}