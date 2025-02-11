#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	
	cin >> n;

	// 위 빈칸 8,6,4,2
	for (int i = 1; i <= n - 1; ++i)
	{
		for (int a = 1; a <= i; ++a)
			cout << '*';

		for (int b = 1; b <= (n * 2) - (2 * i); ++b)
			cout << ' ';

		for (int c = 1; c <= i; ++c)
			cout << '*';

		cout << '\n';
	}

	// 중앙
	for (int i = 1; i <= n * 2; ++i)
		cout << '*';

	cout << '\n';


	// 아래 빈칸 2,4,6,8
	// i = 4
	for (int i = n - 1; i >= 1; --i)
	{
		for (int a = 1; a <= i; ++a)
			cout << '*';

		for (int b = 1; b <= 2 * (n - i); ++b)
			cout << ' ';

		for (int c = 1; c <= i; ++c)
			cout << '*';

		cout << '\n';
	}


	
	return 0;
}



