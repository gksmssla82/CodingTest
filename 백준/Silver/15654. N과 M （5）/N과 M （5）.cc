#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, m;
vector<int> v;
int vis[13];
vector<int> input;

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

	for (int i = 0; i < n; ++i)
	{
		if (!vis[i])
		{
			vis[i] = true;
			v.push_back(input[i]);
			dfs();
			v.pop_back();
			vis[i] = false;
		}
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
		int a;
		cin >> a;
		input.push_back(a);
	}

	sort(input.begin(), input.end());

	dfs();

	return 0;
}