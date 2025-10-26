#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <stack>

int n, m;
vector<int> v[10005];
bool vis[10005];
int ret[10005];
int mx = -987654321;

int dfs(int here)
{
	vis[here] = true;

	int token = 1;

	for (auto& i : v[here])
	{
		if (!vis[i])
		{
			token += dfs(i);
		}
	}

	return token;
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

		v[b].push_back(a);
	}

	for (int i = 1; i <= n; ++i)
	{
		fill(&vis[0], &vis[0] + 10005, 0);
		ret[i] = dfs(i);
		mx = max(mx, ret[i]);
	}


	for (int i = 1; i <= n; ++i)
	{
		if (ret[i] == mx)
		{
			cout << i << ' ';
		}
	}
	

	return 0;
}
