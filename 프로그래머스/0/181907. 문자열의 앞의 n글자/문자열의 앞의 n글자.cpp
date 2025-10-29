#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    
    string s;
   
    for (int i = 0; i < n; ++i)
    {
        s += my_string[i];
    }
    return s;
}