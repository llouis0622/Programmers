#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string str = "";
    
    for(int i = 0; i < my_string.length(); ++i) {
        if(i == num1) str.push_back(my_string[num2]);
        else if(i == num2) str.push_back(my_string[num1]);
        else str.push_back(my_string[i]);
    }
    
    return str;
}