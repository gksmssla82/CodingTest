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

	for (int i = n / 5; i >= 0; --i) // 5로나눈 최대값
	{
		int rest = n - (5 * i); // 5로 나눈 나머지 

		if (rest % 3 == 0) // 3으로 나누어질떄
		{
			ret = i + (rest / 3);
			break;
		}
	}

	cout << ret;

	return 0;
}