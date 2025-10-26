#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>

int n, m;
map<int, bool> mp;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	// n * log n
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;

		mp[a] = true;
	}

	// m * log n
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int a;
		cin >> a;

		if (mp[a])
		{
			cout << "1 ";
		}
		else
		{
			cout << "0 ";
		}
	}

	// answer = n * log n + m * log n1 

	return 0;
}
