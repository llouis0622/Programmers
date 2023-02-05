#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> v;
    
    for(int i = 0; i < quiz.size(); ++i) {
        int x, y, z;
        char c, s;

        stringstream ss;
        ss.str(quiz[i]);
        
        ss >> x >> c >> y >> s >> z;

        if(c == '+') {
            if(x + y == z) v.push_back("O");
            else v.push_back("X");
        }
        
        else if(c == '-') {
            if(x - y == z) v.push_back("O");
            else v.push_back("X");
        }
    }
    
    return v;
}