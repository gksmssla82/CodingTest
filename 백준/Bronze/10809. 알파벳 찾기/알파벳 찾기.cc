#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    string abc = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;

    for (int i = 0; i < abc.length(); ++i)
        cout << (int)s.find(abc[i]) << " ";

    return 0;
}
