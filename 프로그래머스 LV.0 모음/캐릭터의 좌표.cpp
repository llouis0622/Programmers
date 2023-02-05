#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> v;
    
    int x = 0, y = 0, a = board[0] / 2, b = board[1] / 2;
    
    for(int i = 0; i < keyinput.size(); ++i) {
        if(keyinput[i] == "up" && y + 1 <= b) y++;
        else if(keyinput[i] == "down" && y - 1 >= -b) y--;
        else if(keyinput[i] == "left" && x - 1 >= -a) x--;
        else if(keyinput[i] =="right" && x + 1 <= a) x++;
    }
    
    v.push_back(x);
    v.push_back(y);
    
    return v;
}