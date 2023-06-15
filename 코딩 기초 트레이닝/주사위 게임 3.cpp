#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    vector<int> v;
    
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    
    sort(v.begin(), v.end());
    
    if (v[0] == v[3])
        return 1111 * v[0];
    else if (v[0] == v[2] || v[1] == v[3])
        return pow((10 * v[1] + (v[0] + v[3] - v[1])), 2);
    else if (v[0] == v[1] && v[2] == v[3])
        return (v[0] + v[2]) * (v[2] - v[0]);
    else if (v[0] == v[1])
        return v[2] * v[3];
    else if (v[1] == v[2])
        return v[3] * v[0];
    else if (v[2] == v[3])
        return v[0] * v[1];
    else
        return v[0];
}