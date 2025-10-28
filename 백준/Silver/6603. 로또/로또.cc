#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n;
vector<int> v;
vector<int> ret_v;

void dfs(int here)
{
	if (ret_v.size() == 6)
	{
		for (const int& i : ret_v)
		{
			cout << i << ' ';
		}

		cout << '\n';
		return;
	}

	for (int i = here; i < v.size(); ++i)
	{
		ret_v.push_back(v[i]);
		dfs(i + 1);
		ret_v.pop_back();
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	while (true)
	{
		v.clear();
		ret_v.clear();

		cin >> n;

		if (n == 0) break;

		for (int i = 0; i < n; ++i)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}

		dfs(0);

		cout << '\n';
	}

	

	return 0;
}