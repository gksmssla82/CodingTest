#include <iostream>
#include <vector>

using namespace std;

int n, s, e, m;
vector<int> v[105];
bool vis[105];

bool dfs(int here, int depth, int& ret)
{
	vis[here] = true;

	if (here == e)
	{
		ret = depth;
		return true;
	}

	for (auto& i : v[here])
	{
		if (!vis[i])
		{
			if (dfs(i, depth + 1, ret))
			{
				return true;
			}
		}
	}

	return false;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> s >> e >> m;

	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}

	int ret = -1;

	if (dfs(s, 0, ret))
	{
		cout << ret;
	}
	else
	{
		cout << "-1";
	}

	return 0;
}