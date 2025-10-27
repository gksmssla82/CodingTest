#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <stack>


int n, m;

int a[105][105];
int vis[105][105];

int dy[4] = { -1, 0, 1, 0 };
int dx[4] = { 0,1,0,-1 };

int cnt = 0;

// 문제 : a가 0인곳은 공기임, 1인곳 상우하좌에 2개이상 공기가 있을떄 치즈녹임 녹일치즈가 있을떄 cnt 1 증가시켜서 출력해야함 

void dfs(int y, int x)
{
	vis[y][x] = 1;

	for (int i = 0; i < 4; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (0 > ny || 0 > nx || ny >= n || nx >= m) continue;
		if (vis[ny][nx] || a[ny][nx] == 1) continue;

		dfs(ny, nx);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}
	}
	
	while (true)
	{
		// 공기 방문처리 초기화
		fill(&vis[0][0], &vis[0][0] + 105 * 105, 0);
		// 공기 방문처리 1
		dfs(0, 0);

		// 녹일 치즈 보관
		vector<pair<int, int>> v;
		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if (a[i][j] == 1) // 치즈면
				{
					int air = 0;

					for (int k = 0; k < 4; ++k)
					{
						int ny = i + dy[k];
						int nx = j + dx[k];

						if (vis[ny][nx] == 1) // 공기면
						{
							++air;
						}
					}

					if (air >= 2)
					{
						v.push_back({ i,j }); // 녹일 치즈 보관
					}
				}
			}
		}

		if (v.empty())
		{
			break;
		}

		++cnt;

		for (const auto& pos : v)
		{
			a[pos.first][pos.second] = 0; // 치즈 녹임
		}
	}

	cout << cnt << '\n';


	return 0;
}
