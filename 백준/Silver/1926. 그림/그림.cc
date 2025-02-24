#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

#define X first
#define Y second

int board[502][502]; // 보드
bool vis[502][502];  // 방문기록

int n, m; // 열,행

int dx[4] = { 1,0,-1,0 }; 
int dy[4] = { 0,1,0,-1 };

int main()
{

	cin >> n >> m;

	// 보드판 색칠 입력
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> board[i][j];

	int mx = 0; // 그림의 최댓값
	int num = 0; // 그림의 수

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			// 보드가 0이고 이미 방문했으면 건너뛰기
			if (board[i][j] == 0 || vis[i][j])
				continue;

			num++;
			queue<pair<int, int>> q;

			vis[i][j] = true;
			q.emplace(i, j);
			int area = 0; 

			while (!q.empty())
			{
				area++;
				pair<int, int> cur = q.front(); q.pop();

				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					// 열과 행 범위 벗어났으면 건너뛰기
					if (nx < 0 || nx >= n || ny < 0 || ny >= m)
						continue;
					// 이미 방문했거나 색칠이 안되어있으면
					if (vis[nx][ny] || board[nx][ny] != 1)
						continue;

					// 방문
					vis[nx][ny] = 1;
					q.emplace(nx, ny);
				}
			}

			mx = max(mx, area);
		}
	}
	
	cout << num << '\n' << mx;
	return 0;
}