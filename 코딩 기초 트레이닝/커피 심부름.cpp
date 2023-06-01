#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int num = 0;
    
    for (auto i : order) {
        if (i == "iceamericano" || i == "americanoice" || i == "hotamericano" || i == "americanohot" || i == "americano" || i == "anything") num += 4500;
        else num += 5000;
    }
    
    return num;
}