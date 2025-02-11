#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	// 10^15 이므로 long long
	long long a, b;
	
	cin >> a >> b;

	// a가 더 클경우 swap
	if (a > b)
		swap(a, b);

	// 중간값이 없는경우
	if (a == b || b - a == 1)
	{
		cout << '0';
	}

	else
	{
		// a - b - 1 은 count가됨
		cout << b - a - 1 << '\n';

		// 반복문도 overflow 방지 long long
		for (long long i = a + 1; i < b; i++)
		{
			cout << i << ' ';
		}
	}

	return 0;
}

