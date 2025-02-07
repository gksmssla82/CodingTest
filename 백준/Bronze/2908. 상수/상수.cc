#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string a,b;

    cin >> a;
    cin >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int ia, ib;

    ia = atoi(a.c_str());
    ib = atoi(b.c_str());

    int result;
    
    result = (ia > ib) ? ia : ib;

    cout << result;

    return 0;
}
