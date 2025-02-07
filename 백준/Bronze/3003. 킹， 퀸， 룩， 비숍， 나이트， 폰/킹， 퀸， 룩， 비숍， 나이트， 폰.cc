#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    // 킹,퀸,룩,비숍,나이트,폰
    int Allchese[6] = { 1,1,2,2,2,8 };
    int findchese[6] = {};
    int outputchess[6] = { 0 };

    for (int i = 0; i < 6; ++i)
    {
        cin >> findchese[i];
    }

    // Allchese - findchese
    for (int i = 0; i < 6; ++i)
    {
        outputchess[i] = Allchese[i] - findchese[i];
    }

    for (int i = 0; i < 6; ++i)
    {
        cout << outputchess[i] << " ";
    }

    return 0;
}