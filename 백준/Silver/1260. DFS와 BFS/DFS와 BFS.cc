#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <stack>
#include <queue>

int n, m, k;

vector<int> v[1004];
int vis[1004];
queue<int> q;

void dfs(int here)
{
	vis[here] = true;

	cout << here << ' ';

	for (int i : v[here])
	{
		if (!vis[i])
		{
			dfs(i);
		}
	}
}

void bfs(int here)
{
	q.push(here);
	vis[here] = true;

	while (q.size())
	{
		int here = q.front();
		q.pop();

		cout << here << ' ';

		for (int i : v[here])
		{
			if (!vis[i])
			{
				vis[i] = true;
				q.push(i);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m >> k;

	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;

		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for (int i = 1; i <= n; ++i)
	{
		if (v[i].size() > 1)
		{
			sort(v[i].begin(), v[i].end());
		}
	}

	dfs(k);

	cout << '\n';
	fill(&vis[0], &vis[0] + 1004, 0);

	bfs(k);

	
}
