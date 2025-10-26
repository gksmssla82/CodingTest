#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>

int n, m;
map<string, bool> mp;
int cnt = 0;


// 10000 + 10000 * log 10000

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		mp[s] = true;
	}

	for (int i = 0; i < m; ++i)
	{
		string s;
		cin >> s;

		if (mp[s])
		{
			cnt++;
		}
	}

	cout << cnt;
	

	return 0;
}
