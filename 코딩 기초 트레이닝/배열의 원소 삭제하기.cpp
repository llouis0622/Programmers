#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    for (auto i : arr)
        for (auto j : delete_list)
            if (i != j) arr.erase(remove(arr.begin(), arr.end(), j), arr.end());
    
    return arr;
}