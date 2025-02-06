#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        // n = 5   value = 4, 3, 2, 1
        for (int j = 0; j < n - 1 - i; ++j)
            cout << ' ';

        for (int t = 0; t < i + 1; ++t)
            cout << '*';


        cout << '\n';
    }

    return 0;
}