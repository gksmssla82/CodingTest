#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

#define MAX 52

int board[MAX][MAX];
bool check[MAX][MAX];
int nx[4] = { 1,0,-1,0 };
int my[4] = { 0,1,0,-1 };
queue<pair<int, int>> q;
int n, m, t, k;

void bfs(int x, int y)
{
	check[x][y] = true;
	q.emplace(x, y);

	while (!q.empty())
	{
		auto cur = q.front(); q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int ix = cur.first + nx[i];
			int iy = cur.second + my[i];

			if (ix < 0 || ix >= n || iy < 0 || iy >= m)
				continue;
			if (board[ix][iy] != 1 || check[ix][iy])
				continue;

			check[ix][iy] = true;
			q.emplace(ix, iy);
		}
	}
}


int main()
{

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> m >> n >> k;

		int x, y;

		// 배추심기
		for (int j = 0; j < k; ++j)
		{
			cin >> x >> y;
			board[y][x] = 1;
		}

		int worm = 0; // 지렁이


		// 배추 있는곳 BFS 돌리기
		for (int p = 0; p < n; ++p)
		{
			for (int k = 0; k < m; ++k)
			{
				if (board[p][k] != 1 || check[p][k])
					continue;

				bfs(p, k);
				++worm;
			}
		}

		// 지렁이 갯수 출력
		cout << worm << '\n';

		// 보드 및 체크 초기화 
		for (int i = 0; i < n; ++i)
		{
			fill(board[i], board[i] + m, 0);
			fill(check[i], check[i] + m, false);
		}
	}

	return 0;
}

