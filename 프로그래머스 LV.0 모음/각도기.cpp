#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    return angle == 180 ? 4 : ((angle > 90 && angle < 180) ? 3 : ((angle == 90) ? 2 : 1));
}