#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string str = "";
    for(int i = 0; i < rsp.length(); ++i) {
        if(rsp[i] == '2') str.push_back('0');
        else if(rsp[i] == '0') str.push_back('5');
        else str.push_back('2');
    }
    
    return str;
}