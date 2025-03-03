#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

#define MAX 102

int n, m;
string board[MAX];
bool check[MAX][MAX];
int nx[4] = { 1,0,-1,0 };
int my[4] = { 0,1,0,-1 };
queue<pair<int, int>> q;

void BFS(int _x, int _y)
{
	check[_x][_y] = true;
	q.emplace(_x, _y);
	
	while (!q.empty())
	{
		auto cur = q.front(); q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int x = cur.first + nx[i];
			int y = cur.second + my[i];

			if (x < 0 || x >= n || y < 0 || y >= n)
				continue;
			if (check[x][y] != 0 || board[_x][_y] != board[x][y])
				continue;

			check[x][y] = true;
			q.emplace(x, y);
		}
	}
}

int Area()
{
	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (!check[i][j])
			{
				++count;
				BFS(i, j);
			}
		}
	}

	return count;
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> board[i];
		
	int not_g = Area();

	for (int i = 0; i < n; ++i)
		fill(check[i], check[i] + n, false);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (board[i][j] == 'G')
				board[i][j] = 'R';
		}
	}

	int is_g = Area();

	cout << not_g << ' ' << is_g;

	return 0;
}