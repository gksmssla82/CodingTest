#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

string board[102];
int check[102][102];

int main()
{
	int n, m;
	queue<pair<int, int>> q;
	int nx[4] = { 1,0,-1,0 };
	int my[4] = { 0,1,0,-1 };

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
		cin >> board[i];

	check[0][0] = 1;
	q.emplace(0, 0);

	while (!q.empty())
	{
		auto cur = q.front(); q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int x = cur.first + nx[i];
			int y = cur.second + my[i];

			if (x < 0 || x >= n || y < 0 || y >= m)
				continue;
			if (check[x][y] != 0 || board[x][y] != '1')
				continue;

			check[x][y] = check[cur.first][cur.second] + 1;
			q.emplace(x, y);
		}
	}

	cout << check[n - 1][m - 1];
	return 0;
}