#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int x = -1, y = -1;
    
    for (int i = 0; i < arr.size(); ++i)
        if (arr[i] == 2) {
            if (x == -1)
                x = i;
            
            y = i;
        }
    
    if (x == -1)
        return {x};

    return vector<int> (arr.begin() + x, arr.begin() + y + 1);
}