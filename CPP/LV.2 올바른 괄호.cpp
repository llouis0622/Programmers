#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

bool solution(string s) {
    stack<char> str;
    
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '(') str.push('(');
        
        else {
            if(!str.empty() && str.top() == '(') str.pop();
            else str.push(')');  
        }
    }
    
    if(str.empty()) return true;
    
    else return false;
}