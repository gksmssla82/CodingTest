#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int board[1002][1002];
int check[1002][1002];

int main()
{
	int n, m;
	queue<pair<int, int>> q;
	int nx[4] = { 1,0,-1,0 };
	int my[4] = { 0,1,0,-1 };

	cin >> m >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> board[i][j];

			if (board[i][j] == 0)
				check[i][j] = -1;
			if (board[i][j] == 1)
				q.emplace(i, j);
		}
	}

	

	while (!q.empty())
	{
		auto cur = q.front(); q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int x = cur.first + nx[i];
			int y = cur.second + my[i];

			if (x < 0 || x >= n || y < 0 || y >= m)
				continue;
			if (check[x][y] >= 0)
				continue;

			check[x][y] = check[cur.first][cur.second] + 1;
			q.emplace(x, y);
		}
	}

	int day = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (check[i][j] == -1)
			{
				cout << -1;
				return 0;
			}
			day = max(day, check[i][j]);
		}
	}

	cout << day;

	return 0;
}