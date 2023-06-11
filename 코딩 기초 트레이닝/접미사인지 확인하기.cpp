#include <string>

using namespace std;

int solution(string my_string, string is_suffix) {
    return (my_string.rfind(is_suffix) != string::npos && my_string.rfind(is_suffix) == my_string.size() - is_suffix.size()) ? 1 : 0;
}