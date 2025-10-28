#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, m;
vector<int> v;

void dfs(int here)
{
	if (v.size() == m)
	{
		for (const int& i : v)
		{
			cout << i << ' ';
		}

		cout << '\n';
		return;
	}

	for (int i = here; i <= n; ++i)
	{
		v.push_back(i);
		dfs(i + 1);
		v.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	
	dfs(1);

	return 0;
}