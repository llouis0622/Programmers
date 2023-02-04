#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string my_string) {
    int sum = 0;
    
    for(int i = 0; i < my_string.size(); i++) {
        if(isdigit(my_string[i])) sum += my_string[i] - '0';
    }
    
    return sum;
}