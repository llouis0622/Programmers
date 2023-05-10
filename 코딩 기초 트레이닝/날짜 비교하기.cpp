#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    if (date1.at(0) < date2.at(0)) return 1;
    else if (date1.at(0) == date2.at(0)) {
        if (date1.at(1) < date2.at(1)) return 1;
        else if (date1.at(1) == date2.at(1)) {
            if (date1.at(2) < date2.at(2)) return 1;
            else if (date1.at(2) == date2.at(2)) return 0;
            else return 0;
        }
        else return 0;
    }
    else return 0;
}