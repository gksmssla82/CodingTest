#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>

int n;
string name, check;
map<string, bool> mp;

// n = 2 <= 1000000
// 1000000 * log(1000000)

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> name >> check;

		if (check == "enter")
		{
			mp[name] = true;
		}
		else if (check == "leave")
		{
			mp[name] = false;
		}
	}

	for (auto it = mp.rbegin(); it != mp.rend(); ++it)
	{
		if (it->second)
		{
			cout << it->first << '\n';
		}
	}
	

	return 0;
}
