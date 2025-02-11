#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	
	cin >> n;

	// 별 9,7,5,3 / 공백 0,1,2,3
	for (int i = 1; i <= n - 1; ++i)
	{
		for (int b = 1; b < i; b++)
			cout << ' ';

		for (int a = 1; a <= (n * 2) - (2 * i) + 1; ++a)
			cout << '*';

		cout << '\n';
	}

	for (int i = 1; i <= n - 1; ++i)
		cout << ' ';

	cout << '*' << '\n';

	// 공백 3,2,1,0 별 3,5,7,9 

	for (int i = 1; i <= n - 1; ++i)
	{
		for (int a = n - 2; a >= i; --a)
			cout << ' ';

		for (int b = 1; b <= 2 * i + 1; ++b)
			cout << '*';

		cout << '\n';
	}

	
	return 0;
}
