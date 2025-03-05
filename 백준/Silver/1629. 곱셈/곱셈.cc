#include <bits/stdc++.h>

using namespace std;

long long Func(long long _a, long long _b, long long _c)
{
	if (_b == 1)
		return _a % _c;

	long long val = Func(_a, _b / 2, _c);

	val = val * val % _c;

	if (_b % 2 == 0)
		return val;

	return val * _a % _c;
}

int main()
{
	long long a, b, c;

	cin >> a >> b >> c;

	cout << Func(a, b, c);
}
