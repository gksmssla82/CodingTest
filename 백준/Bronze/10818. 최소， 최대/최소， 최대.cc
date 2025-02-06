#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int max = -1000000;
    int min = 1000000;
    int input;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> input;

        if (input > max)
            max = input;

        if (input < min)
            min = input;
    }

    cout << min << ' ' << max;

    return 0;
}
