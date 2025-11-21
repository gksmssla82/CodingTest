#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	string s;

	cin >> t;

	while (t--)
	{
		int ans = 0;
		int sum = 0;
		cin >> s;
		
		for (auto& i : s)
		{
			if (i == 'O')
			{
				ans++;
			}
			else
			{
				ans = 0;
			}

			sum += ans;
		}

		cout << sum << '\n';
	}

	return 0;
}