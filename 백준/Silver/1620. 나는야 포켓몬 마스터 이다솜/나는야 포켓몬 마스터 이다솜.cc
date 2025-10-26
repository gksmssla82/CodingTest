#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>

int n, m;
map<string, int> mp;
map<int, string> mp2;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 1; i <= n; ++i)
	{
		string s;

		cin >> s;

		mp[s] = i;
		mp2[i] = s;
	}

	for (int i = 0; i < m; ++i)
	{
		string s;
		cin >> s;

		if (int a = atoi(s.c_str()))
		{
			cout << mp2[a] << '\n';
		}
		else
		{
			cout << mp[s] << '\n';
		}
	}
	
	

	return 0;
}
