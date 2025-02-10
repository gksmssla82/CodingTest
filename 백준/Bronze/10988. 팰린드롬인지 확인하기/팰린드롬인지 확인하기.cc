#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string word;
    string reverseword;

    cin >> word;

    // 깊은복사
    reverseword = word;

    reverse(reverseword.begin(), reverseword.end());

    if (word == reverseword)
        cout << "1";
    else
        cout << "0";


    return 0;
}
