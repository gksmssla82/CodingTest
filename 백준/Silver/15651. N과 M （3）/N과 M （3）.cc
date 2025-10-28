#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, m;
vector<int> v;

// 1, 2, 3, 4
void dfs()
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
	
	for (int i = 1; i <= n; ++i)
	{
		v.push_back(i);
		dfs();
		v.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	
	dfs();

	return 0;
}