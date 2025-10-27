#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int n;
int map[30][30];
bool vis[30][30];

vector<int> v;

int dy[4] = { -1,0,1,0 };
int dx[4] = { 0,1,0,-1 };

int cnt = 0;

int dfs(int y, int x)
{
	vis[y][x] = true;

	int token = 1;

	for (int i = 0; i < 4; ++i)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (0 > ny || 0 > nx || ny >= n || nx >= n) continue;
		if (vis[ny][nx] || map[ny][nx] == 0) continue;

		token += dfs(ny, nx);
	}

	return token;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		for (int j = 0; j < n; ++j)
		{
			map[i][j] = s[j] - '0';
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (!vis[i][j] && map[i][j] == 1)
			{
				++cnt;
				v.push_back(dfs(i, j));
			}
		}
	}
	
	cout << cnt << '\n';
	
	sort(v.begin(), v.end());

	for (auto& i : v)
	{
		cout << i << '\n';
	}

	return 0;
}