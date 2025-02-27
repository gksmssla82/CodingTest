#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

// Input 1 = 익은 토마토, 0 = 익지 않은 토마토, -1 토마토가 없는 위치
// Output 0 = 처음부터 모두 토마토가 익어있음, -1 토마토가 모두 익지 못하는 상황, else = 토마토가 모두 익는 일수
// 익은토마토가 처음에 여러개일수도있음

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

			if (board[i][j] == 1)
				q.emplace(i, j);
			if (board[i][j] == 0)
				check[i][j] = -1;
		}
	}

	while (!q.empty())
	{
		pair<int, int> cur = q.front(); q.pop();

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

	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (check[i][j] == -1)
			{
				cout << -1;
				return 0;
			}

			ans = max(ans, check[i][j]);
		}
	}

	cout << ans;

	return 0;
}