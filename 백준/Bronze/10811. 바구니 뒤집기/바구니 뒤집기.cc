#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   // 바구니 1 ~ n개 생성, m번 바꿈
   // i ~ j  범위 의 역순으로 인덱스의 값을 바꿈

    int arr[100] = {0};
    int n, m;

    cin >> n >> m;

    // 인덱스에 1 ~ n개 생성
    for (int i = 0; i < n; ++i)
    {
        arr[i] = i + 1;
    }


    for (int t = 0; t < m; ++t)
    {
        int i, j;
        cin >> i >> j;

        // arr 인덱스 맞추기
        // ex) i = 1 = 0번인덱스
        i -= 1;
        j -= 1;

       // i번째 인덱스 j번째 인덱스 swap후 ++i,--j
        for (i;  i < j; ++i & --j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
       }
    }
    

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
