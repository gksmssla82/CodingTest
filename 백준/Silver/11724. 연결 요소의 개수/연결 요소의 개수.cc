#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> v[1005];
bool vis[1005];
int cnt = 0;

void dfs(int here)
{
	vis[here] = true;

	for (auto& i : v[here])
	{
		if (!vis[i])
		{
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

	for (int i = 1; i <= n; ++i)
	{
		if (!vis[i])
		{
			++cnt;
			dfs(i);
		}
	}

	cout << cnt;

	

	return 0;
}