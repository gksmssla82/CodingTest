#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[3][4] = { 0 };
    int cnt = 0;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (arr[i][j] == 0)
                ++cnt;
        }

        if (cnt == 1)
            cout << "A";
        else if (cnt == 2)
            cout << "B";
        else if (cnt == 3)
            cout << "C";
        else if (cnt == 4)
            cout << "D";
        else
            cout << "E";

        cout << '\n';

        cnt = 0;
    }




    return 0;
}
