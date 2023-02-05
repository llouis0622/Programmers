#include <string>
#include <vector>
#include <stack>
#include <sstream>

using namespace std;

int solution(string s) {
    stack<int> str;
    
    int ans = 0;
    string vtr;
    
    stringstream ss(s);
    
    while(ss >> vtr) {
        if(vtr == "Z") str.pop();        
        else str.push(stoi(vtr));
    }
    
    while(!str.empty()) {
        ans += str.top();
        str.pop();
    }
    
    return ans;
}