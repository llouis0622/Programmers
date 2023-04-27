#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) {
    return (my_string.find(target) != std::string::npos) ? 1 : 0;
}