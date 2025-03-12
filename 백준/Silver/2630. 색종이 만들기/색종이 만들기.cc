#include <bits/stdc++.h>

using namespace std;

// 2^7 == 128
#define MAX 128

int paper[MAX][MAX];

// 0 하얀색, 1 파란색
int cnt[2];

bool check(int x, int y, int n)
{

	for (int i = x; i < x + n; ++i)
	{
		for (int j = y; j < y + n; ++j)
		{
			// 범위내 종이가 다른 숫자라면 false
			if (paper[x][y] != paper[i][j])
			return false;
		}
	}

	return true;
}

void recursion(int x, int y, int n)
{
	// BaseCondition (탈출조건)
	if (check(x, y, n))
	{
		cnt[paper[x][y]] += 1;
		return;
	}

	// 한 변의 길이
	int z = n / 2;

	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 2; ++j)
			recursion(x + i * z, y + j * z, z);
}

int main()
{
	int n;

	cin >> n;

	// paper 입력
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> paper[i][j];

	// 0,0부터 시작
	recursion(0, 0, n);

	// 갯수 출력
	for (int i = 0; i < 2; ++i)
		cout << cnt[i] << '\n';
}