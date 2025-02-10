#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[5] = {};
    int sum = 0;

    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + 5);

    int average = sum / 5;

    cout << average << '\n' << arr[2];
  
    return 0;
}