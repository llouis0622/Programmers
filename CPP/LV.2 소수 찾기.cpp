#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool check(int num) {
    if(num < 2) return false;
    
    for(int i = 2; i <= sqrt(num); ++i) {
        if(num % i == 0) return false;
    }
    
    return true;  
}

bool valid(int num, string str) {
    string s = to_string(num);
    
    for(int i = 0; i < s.size(); ++i) {
        int num = false;
        
        for(int j = 0; j < str.size(); ++j) {
            if(s.at(i) == str.at(j)) {
                num = true;
                
                str.at(j) = ' ';
                
                break;
            }
        }
        
        if(!num) return false;
    }
    
    return true;
}

int solution(string numbers) {
    int ans = 0;
    
    sort(numbers.begin(), numbers.end(), greater<int>());
    
    int max = stoi(numbers);
    
    for(int i = 0; i <= max; ++i) {
        if(check(i) && valid(i, numbers)) ans++;
    }
    
    return ans;
}