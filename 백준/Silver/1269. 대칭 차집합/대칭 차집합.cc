#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>

int n, m;
map<int, int> mp;
int cnt = 0;
// n log n + m log n + (n + m)

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;

		mp[a]++;
	}

	for (int i = 0; i < m; ++i)
	{
		int a;
		cin >> a;
		mp[a]++;
	}

	for (auto& i : mp)
	{
		if (i.second == 1)
		{
			++cnt;
		}
	}

	cout << cnt;


	return 0;
}
