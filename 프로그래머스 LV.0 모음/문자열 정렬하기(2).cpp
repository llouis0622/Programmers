#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    for(int i = 0; i < my_string.length(); ++i) {
        my_string[i] = tolower(my_string[i]);
    }
    
    sort(my_string.begin(), my_string.end());
    
    return my_string;
}