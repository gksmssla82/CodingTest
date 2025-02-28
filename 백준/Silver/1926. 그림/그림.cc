#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int board[502][502];
bool check[502][502];

int main()
{
	int n, m;
	int num = 0, width = 0;
	queue<pair<int, int>> q;
	int nx[4] = { 1,0,-1,0 };
	int my[4] = { 0,1,0,-1 };

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> board[i][j];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (check[i][j] || board[i][j] != 1)
				continue;

			check[i][j] = true;
			q.emplace(i, j);
			++num;
			int area = 0;

			while (!q.empty())
			{
				auto cur = q.front(); q.pop();
				++area;

				for (int i = 0; i < 4; ++i)
				{
					int x = cur.first + nx[i];
					int y = cur.second + my[i];

					if (x < 0 || x >= n || y < 0 || y >= m)
						continue;
					if (check[x][y] || board[x][y] != 1)
						continue;

					check[x][y] = true;
					q.emplace(x, y);
				}
			}

			width = max(width, area);
		}
	}

	cout << num << '\n' << width;
	return 0;
}
