#include <bits/stdc++.h>

using namespace std;

// 3^7 == 2187
#define MAX 2200

int board[MAX][MAX];
int cnt[3]; // -1, 0, 1

// 현재 종이가 같은 숫자인지
bool check(int x, int y, int n)
{
	for (int i = x; i < x + n; ++i)
	{
		for (int j = y; j < y + n; ++j)
		{
			// 현재 영역이 하나라도 다르면 false
			if (board[x][y] != board[i][j])
				return false;
		}
	}

	return true;
}

void recursion(int x, int y, int z)
{
	if (check(x, y, z)) // base condition
	{
		// -1,0,1을 0,1,2,로 나타내기위해 1 증가
		cnt[board[x][y] + 1] += 1;
		return;
	}

	// 한변 길이 구하기
	int n = z / 3;

	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 3; ++j)
			recursion(x + i * n, y + j * n, n);
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> board[i][j];

	recursion(0, 0, n);

	for (int i = 0; i < 3; ++i)
		cout << cnt[i] << '\n';
}