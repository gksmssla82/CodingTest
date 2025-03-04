#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

#define MAX 302

int n,x,y,xx,yy;
int check[MAX][MAX];
int nx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int my[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
queue<pair<int, int>> q;

void initialize_Check()
{
	for (int i = 0; i < n; ++i)
		fill(check[i], check[i] + n, -1);
}

void Dfs()
{
	while (!q.empty())
	{
		auto cur = q.front(); q.pop();

		for (int i = 0; i < 8; ++i)
		{
			int dx = cur.first + nx[i];
			int dy = cur.second + my[i];

			if (dx < 0 || dx >= n || dy < 0 || dy >= n)
				continue;
			if (check[dx][dy] >= 0)
				continue;

			check[dx][dy] = check[cur.first][cur.second] + 1;
			q.emplace(dx, dy);
		}
	}
}

int main()
{
	int t;

	cin >> t;

	while (t--)
	{
		cin >> n;

		initialize_Check();

		cin >> x >> y;
		
		check[x][y] = 0;
		q.emplace(x, y);

		cin >> xx >> yy;

		Dfs();
	
		cout << check[xx][yy] << '\n';
	}

	return 0;
}