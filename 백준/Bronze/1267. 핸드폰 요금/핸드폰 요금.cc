#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, y = 0, m = 0;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int t;
		cin >> t;

		y += (t / 30 + 1) * 10;
		m += (t / 60 + 1) * 15;
	}

	if (y == m)
	{
		cout << "Y M " << y;
	}

	else if (y > m)
	{
		cout << "M " << m;
	}
	
	else
	{
		cout << "Y " << y;
	}

	return 0;
}


