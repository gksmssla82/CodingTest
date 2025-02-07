#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   // n개의 바구니에있는 공을 m번 바꿈 서로 swap하는것

    int arr[100] = {};
    int n, m;
   
    cin >> n >> m;

    // 1 ~ 100을 0 ~ 99 인덱스까지 삽입
    for (int i = 0; i < n; ++i)
    {
        arr[i] = i + 1;
    }

   
    for (int t = 0; t < m; ++t)
    {
        int i, j;

        cin >> i >> j;

        int temp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = temp;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}