#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <stack>

int n, m;
vector<int> v[105];
bool vis[105];
int cnt = 0;

void dfs(int here)
{
	vis[here] = true;

	for (auto& i : v[here])
	{
		if (!vis[i])
		{
			++cnt;
			dfs(i);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	dfs(1);

	cout << cnt;

	return 0;
}
