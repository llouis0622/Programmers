#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string str = "";
    
    for(int i = code - 1; i < cipher.length(); i+= code) str.push_back(cipher[i]);
    
    return str;
}