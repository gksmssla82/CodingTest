#include <iostream>
#include <vector>

using namespace std;

int n, m, k;
int map[105][105];
bool vis[105][105];

int dy[4] = {-1,0,1,0};
int dx[4] = { 0,1,0,-1 };

int mxToken = 0;

int dfs(int y, int x)
{
	vis[y][x] = true;

	int token = 1;

	for (int i = 0; i < 4; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (0 > ny || 0 > nx || ny >= n || nx >= m) continue;
		if (vis[ny][nx] || map[ny][nx] == 0) continue;

		token += dfs(ny, nx);
	}

	return token;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> k;

	for (int i = 0; i < k; ++i)
	{
		int a, b;
		cin >> a >> b;

		--a;
		--b;
		map[a][b] = 1;
	}
	
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (!vis[i][j] && map[i][j] == 1)
			{
				mxToken = max(mxToken, dfs(i, j));
			}
		}
	}

	cout << mxToken;
	

	return 0;
}