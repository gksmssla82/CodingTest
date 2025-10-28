#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, m;
int sy, sx, ey, ex; // 주난,범인
int cnt = 0;

int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };

char a[305][305];
int vis[305][305];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	cin >> sy >> sx >> ey >> ex;
	--sy; --sx; --ey; --ex; // 0,0 맞추기

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}
	}

	queue<pair<int, int>> q;
	vis[sy][sx] = 1;
	q.push({ sy,sx });

	while (a[ey][ex] != '0') // 범인한태 도달할떄까지
	{
		queue<pair<int, int>> temp; // 지역변수라 초기화안해도됨 (pop무필요);
		++cnt;

		while (q.size()) // 1라운드
		{
			int qy = q.front().first;
			int qx = q.front().second;
			q.pop();

			for (int i = 0; i < 4; ++i)
			{
				int ny = qy + dy[i];
				int nx = qx + dx[i];

				if (0 > ny || 0 > nx || ny >= n || nx >= m || vis[ny][nx]) continue;

				vis[ny][nx] = cnt;

				if (a[ny][nx] != '0') // 친구 or 범인
				{
					a[ny][nx] = '0'; // 다음라운드 빈 칸
					temp.push({ ny,nx }); // 다음 라운드 준비
				}
				else // 빈공간
				{
					q.push({ ny,nx }); // 이번 라운드 이동
				}

			}
		}

		q = temp;
	}



	cout << vis[ey][ex];

	return 0;
}