#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int a, int b) {
    int s = stoi(to_string(a) + to_string(b));
    return max(s, 2 * a * b);
}