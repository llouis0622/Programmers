#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(int i = 0; i < my_string.length(); ++i) {
        for(int j = i + 1; j < my_string.length(); ++j) {
            if(my_string[i] == my_string[j]) {
                my_string.erase(j, 1);
                
                j--;
            }
        }
    }
    
    return my_string;
}