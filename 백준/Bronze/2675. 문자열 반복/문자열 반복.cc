#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, r;
	string s;

	cin >> t;

	while (t--)
	{
		cin >> r;
		cin >> s;

		for (auto& i : s)
		{
			for (int j = 0; j < r; ++j)
			{
				cout << i;
			}
		}

		cout << '\n';
	}


	return 0;
}