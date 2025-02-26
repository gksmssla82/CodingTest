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
	int movecount = 0;
	int nx[4] = { 1,0,-1,0 };
	int ny[4] = { 0,1,0,-1 };

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
		cin >> board[i];

	for (int i = 0; i < n; ++i)
		fill(check[i], check[i] + m, 0);

	check[0][0] = 1;
	queue<pair<int, int>> q;
	q.emplace(0, 0);

	while (!q.empty())
	{
		pair<int,int> cur = q.front(); q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int x = cur.first + nx[i];
			int y = cur.second + ny[i];

			if (x < 0 || x >= n || y < 0 || y >= m)
				continue;
			if (check[x][y] != 0 || board[x][y] != '1')
				continue;

			check[x][y] = check[cur.first][cur.second] + 1;
			q.emplace(x, y);
		}
	}

	

	cout << check[n-1][m-1];

	return 0;
}