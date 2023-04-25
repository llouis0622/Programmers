#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string s;
    
    for (int i = 0; i < arr.size(); ++i)
        s.append(arr[i]);
    
    return s;
}