#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> v;
    
    for (int i = 0; i < finished.size(); ++i)
        if (!finished[i] && 1) v.push_back(todo_list[i]);
    
    return v;
}