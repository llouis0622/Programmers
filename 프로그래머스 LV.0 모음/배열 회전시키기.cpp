#include <string>
#include <vector>
#include <deque>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    deque<int> dq(numbers.begin(), numbers.end());
    
    if(direction == "right") {
        dq.push_front(dq.back());
        dq.pop_back();
    }
    
    else{
        dq.push_back(dq.front());
        dq.pop_front();
    }
    
    vector<int> v(dq.begin(), dq.end());
    
    return v;
}