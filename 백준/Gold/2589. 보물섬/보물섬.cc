#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

char a[55][55];
int vis[55][55];

int n, m;
int cnt = 0;

int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };

void bfs(int y, int x)
{
	fill(&vis[0][0], &vis[0][0] + 55 * 55, 0);
	queue<pair<int, int>> q;

	vis[y][x] = 1;
	q.push({ y,x });

	while (q.size())
	{
		int qy = q.front().first;
		int qx = q.front().second;
		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int ny = qy + dy[i];
			int nx = qx + dx[i];

			if (0 > ny || 0 > nx || ny >= n || nx >= m) continue;
			if (vis[ny][nx] || a[ny][nx] == 'W') continue;

			q.push({ ny,nx });
			vis[ny][nx] = vis[qy][qx] + 1;

			cnt = max(cnt, vis[ny][nx]);
		}
	}
}



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] == 'L')
			{
				bfs(i, j);
			}
		}
	}

	cout << cnt -1;

	
	

	return 0;
}