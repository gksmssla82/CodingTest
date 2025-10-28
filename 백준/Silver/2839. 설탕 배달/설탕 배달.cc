#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n;
int ret = -1;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (int i = n / 5; i >= 0; --i)
	{
		int rest = n - (i * 5);

		if (rest % 3 == 0)
		{
			ret = i + (rest / 3);
			break;
		}
	}

	cout << ret;

	return 0;
}