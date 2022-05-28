#include <string>
#include <vector>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> v;

    for (int i = 3; i < brown / 2; ++i) {
        for (int j = 3; j < yellow + 3; ++j) {
           if (yellow == (i - 2) * (j - 2)) {
               if ((i * 2) + 2 * (j - 2) == brown && i >= j) {
                   v.push_back(i);
                   v.push_back(j);
               }
           }
        }
    }
    
    return v;
}