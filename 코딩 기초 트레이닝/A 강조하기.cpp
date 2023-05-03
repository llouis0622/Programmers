#include <string>
#include <cctype>

using namespace std;

string solution(string myString) {
    for (int i = 0; i < myString.size(); ++i) {
        myString[i] = tolower(myString[i]);
        
        if (myString[i] == 'a') myString[i] = toupper(myString[i]);
    }
    
    return myString;
}