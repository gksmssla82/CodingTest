#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <tuple>

using namespace std;

#define MAX 102

int n, m, h;

int board[MAX][MAX][MAX];
int check[MAX][MAX][MAX];

int nx[6] = {0,0,1,-1,0,0};
int my[6] = {1,-1,0,0,0,0};
int hz[6] = {0,0,0,0,1,-1};

queue<tuple<int, int, int>> q;

void Dfs()
{
	while (!q.empty())
	{
		auto cur = q.front(); q.pop();
		int curX, curY, curZ;
		tie(curX, curY, curZ) = cur;

		for (int i = 0; i < 6; ++i)
		{
			int x = curX + nx[i];
			int y = curY + my[i];
			int z = curZ + hz[i];

			if (x < 0 || x >= n || y < 0 || y >= m || z < 0 || z >= h)
				continue;
			if (check[x][y][z] >= 0)
				continue;

			check[x][y][z] = check[curX][curY][curZ] + 1;
			q.emplace(x, y, z);
		}
	}
}

int Out_Answer()
{
	int ans = 0;

	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				if (check[j][k][i] == -1)
					return -1;
				
				ans = max(ans, check[j][k][i]);
			}
		}
	}

	return ans;
}

int main()
{
	cin >> m >> n >> h;

	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				int temp;
				cin >> temp;
				board[j][k][i] = temp;

				if (temp == 1)
					q.emplace(j, k, i);
				if (temp == 0)
					check[j][k][i] = -1;
			}
		}
	}

	Dfs();

	int ans = Out_Answer();

	ans == -1 ? cout << -1 : cout << ans;

	return 0;
}