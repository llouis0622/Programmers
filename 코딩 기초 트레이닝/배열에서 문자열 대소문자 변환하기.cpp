#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> v = strArr;
    
    for (int i = 0; i < v.size(); ++i) {
        if (i % 2)
            for (int j = 0; j < v[i].length(); ++j)
                v[i][j] = toupper(v[i][j]);
        else
            for (int j = 0; j < v[i].length(); ++j)
                v[i][j] = tolower(v[i][j]);
    }
    
    return v;
}