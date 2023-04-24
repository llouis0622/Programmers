#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string s;
    
    for (int i = 0; i < k; ++i)
        s.append(my_string);
    
    return s;
}