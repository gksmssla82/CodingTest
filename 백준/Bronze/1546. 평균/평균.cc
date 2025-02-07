#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   // 바구니 1 ~ n개 생성, m번 바꿈
   // i ~ j  범위 의 역순으로 인덱스의 값을 바꿈
    // 50,100, 75
    double arr[1000] = {};
    int n;
    int max = 0;
    double sum = 0;
    double value = 0;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        sum += (arr[i] / max) * 100;
    }

    value = sum / n;

    cout << value;

    return 0;
}
