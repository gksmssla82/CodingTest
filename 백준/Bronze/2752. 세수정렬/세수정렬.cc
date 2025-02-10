#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[3] = {};

    for (int i = 0; i < 3; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 2 - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}
