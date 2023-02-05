#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    string s = "";
    
    int idx = 0;
    
    reverse(bin1.begin(), bin1.end());
    reverse(bin2.begin(), bin2.end());
    
    if(bin1.size() > bin2.size()) {
        int num = bin1.size() - bin2.size();
        
        for(int i = 0; i < num; ++i) bin2 += '0';
    }
    
    else {
        int num = bin2.size() - bin1.size();
        
        for(int i = 0; i < num; ++i) bin1 += '0';
    }

    for(int i = 0; i < bin1.size(); ++i) {
        int num = (bin1[i] - '0') + (bin2[i] - '0') + idx;
        
        idx = num / 2;
        s += to_string(num % 2);
    }
    
    if(idx != 0) s += to_string(idx);
    
    reverse(s.begin(), s.end());
    
    return s;
}