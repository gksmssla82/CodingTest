#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> v[100005];
bool vis[100005];
int p[100005];

void dfs(int here)
{
	vis[here] = true;

	for (auto& i : v[here])
	{
		if (!vis[i])
		{
			p[i] = here;
			dfs(i);
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = 0; i < n - 1; ++i)
	{
		int a, b;
		cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	dfs(1);

	for (int i = 2; i <= n; ++i)
	{
		cout << p[i] << '\n';
	}

	return 0;
}