#include <bits/stdc++.h>

using namespace std;

#define MAX 1002

int t, n, m;

string board[MAX];
int f_check[MAX][MAX], s_check[MAX][MAX];
queue<pair<int, int>> q_f, q_s;
int nx[4] = { 1,0,-1,0 };
int my[4] = { 0,1,0,-1 };



void Initialize_check(int _n, int _m)
{
	for (int i = 0; i < _n; ++i)
	{
		fill(f_check[i], f_check[i] + _m, -1);
		fill(s_check[i], s_check[i] + _m, -1);
	}
}

void Find_Pos()
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (board[i][j] == '@')
			{
				s_check[i][j] = 0;
				q_s.emplace(i, j);
			}

			if (board[i][j] == '*')
			{
				f_check[i][j] = 0;
				q_f.emplace(i, j);
			}
		}
	}
}

void Bfs_Fire()
{
	while (!q_f.empty())
	{
		auto cur = q_f.front(); q_f.pop();

		for (int i = 0; i < 4; ++i)
		{
			int x = cur.first + nx[i];
			int y = cur.second + my[i];

			if (x < 0 || x >= n || y < 0 || y >= m)
				continue;
			if (f_check[x][y] >= 0 || board[x][y] == '#')
				continue;

			f_check[x][y] = f_check[cur.first][cur.second] + 1;
			q_f.emplace(x, y);
		}
	}
}

void Bfs_Sanggeun()
{
	while (!q_s.empty())
	{
		auto cur = q_s.front(); q_s.pop();

		for (int i = 0; i < 4; ++i)
		{
			int x = cur.first + nx[i];
			int y = cur.second + my[i];

			// 탈출 조건 완료
			if (x < 0 || x >= n || y < 0 || y >= m)
			{
				cout << s_check[cur.first][cur.second] + 1 << '\n';
				return;
			}
			if (s_check[x][y] >= 0 || board[x][y] == '#')
				continue;

			if (f_check[x][y] != -1 && f_check[x][y] <= s_check[cur.first][cur.second] + 1)
				continue;

			s_check[x][y] = s_check[cur.first][cur.second] + 1;
			q_s.emplace(x, y);
		}
	}

	cout << "IMPOSSIBLE" << '\n';
}

int main()
{
	cin >> t;

	while (t--)
	{
		q_s = queue<pair<int, int>>();
		q_f = queue<pair<int, int>>();

		cin >> m >> n;

		Initialize_check(n, m);

		for (int i = 0; i < n; ++i)
			cin >> board[i];

		Find_Pos();

		Bfs_Fire();

		Bfs_Sanggeun();
	}

	return 0;
}
