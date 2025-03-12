#include <bits/stdc++.h>

using namespace std;

#define MAX 64

string quardtree[MAX];

void recursion(int x, int y, int n)
{
    if (n == 1)
    {
        cout << quardtree[x][y];  // BaseCondition: 한 칸만 남았을 경우 해당 값 출력
        return;
    }

    bool zero = true, one = true;

    // 현재 영역이 모두 같은 숫자인지 확인
    for (int i = x; i < x + n; ++i)
    {
        for (int j = y; j < y + n; ++j)
        {
            if (quardtree[i][j] == '1')  // '1'이 존재하면 zero가 false
                zero = false;
            else  // '0'이 존재하면 one이 false
                one = false;
        }
    }

    // 현재 영역이 모두 0으로만 이루어짐
    if (zero)
        cout << 0;
    // 현재 영역이 모두 1로만 이루어짐
    else if (one)
        cout << 1;
    // 섞여 있는 경우 -> 4등분하여 다시 탐색
    else
    {
        cout << '(';
        recursion(x, y, n / 2);               // 왼쪽 위
        recursion(x, y + n / 2, n / 2);       // 오른쪽 위
        recursion(x + n / 2, y, n / 2);       // 왼쪽 아래
        recursion(x + n / 2, y + n / 2, n / 2); // 오른쪽 아래
        cout << ')';
    }
}

int main()
{
    int n;
    cin >> n;

    // 입력 받기
    for (int i = 0; i < n; ++i)
        cin >> quardtree[i];

    // (0,0)에서 시작
    recursion(0, 0, n);

    return 0;
}