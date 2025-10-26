#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>

int n, m;
map<string, int> mp;
vector<string> v;

// n or m log n * 3

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;

		mp[s]++;
	}

	for (int i = 0; i < m; ++i)
	{
		string s;
		cin >> s;

		if (mp[s] > 0)
		{
			v.push_back(s);
		}
	}

	sort(v.begin(), v.end());

	cout << v.size() << '\n';

	for (auto& i : v)
	{
		cout << i << '\n';
	}
	

	return 0;
}
