#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main()
{
	int a, b;

	cin >> a;

	int ans = 0;

	for (int i = 0; i < a; ++i)
	{
		cin >> b;
		int cnt = 0;

		for (int j = 1; j <= b; ++j)
		{
			if (b % j == 0)
				++cnt;
		}

		if (cnt == 2)
			++ans;
	}

	cout << ans;

	return 0;
}
