#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string a;
    string b;
    for (const int& i : num_list)
    {
        if (i % 2 == 0)
        {
            a += to_string(i);
        }
        else
        {
            b += to_string(i);
        }
    }
    
    return stoi(a) + stoi(b);
}