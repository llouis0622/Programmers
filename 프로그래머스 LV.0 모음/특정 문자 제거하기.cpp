#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {
    for(char i: letter) my_string.erase(remove(my_string.begin(), my_string.end(), i), my_string.end());
    
    return my_string;
}