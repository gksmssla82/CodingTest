#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int mul = 1;
    int sum = 0;
    int square = 0;
    for (const auto& i : num_list)
    {
        mul *= i;
        sum += i;
    }
    square = sum * sum;
    
    return mul < square ? 1 : 0;
}