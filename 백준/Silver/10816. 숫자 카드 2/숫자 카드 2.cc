#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>

int n, m;
map<int, int> mp;

// n log n + m log n

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;

		mp[a]++;
	}

	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		int a; 
		cin >> a;

		cout << mp[a] << ' ';
	}
	
	

	return 0;
}
