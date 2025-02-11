#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	
	cin >> n;

	// 위 줄 4 / 빈칸 4,3,2,1 / 별 1,3,5,7

	for (int i = 1; i <= n - 1; ++i)
	{
		for (int j = 1; j <= n - i; ++j)
			cout << ' ';

		for (int p = 1; p <= 2 * i - 1; ++p)
			cout << '*';

		cout << '\n';
	}

	// 중간
	for (int i = 1; i <= n * 2 - 1; ++i)
		cout << '*';

	cout << '\n';

	// 아래 줄 4 / 빈칸 1,2,3,4 / 별 7,5,3,1
	for (int i = n - 1; i >= 1; --i)
	{
		for (int j = 1; j <= n - i; ++j)
			cout << ' ';

		for (int p = 1; p <= 2 * i - 1; ++p)
			cout << '*';

		cout << '\n';
	}

	
	return 0;
}

