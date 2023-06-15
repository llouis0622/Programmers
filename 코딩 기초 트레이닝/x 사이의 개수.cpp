#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> v;
    
    int num = 0;
    
    for (int i = 0; i < myString.size(); ++i)
        if (myString[i] == 'x') {
            v.push_back(i - num);
            num = i + 1;
        }
    
    v.push_back(myString.size() - num);
    
    return v;
}