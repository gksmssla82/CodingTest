#include <bits/stdc++.h>

using namespace std;

int n, r, c;

int recursion(int n, int r, int c)
{
	if (n == 0)
		return 0;

	int half = 1 << (n - 1);

	if (r < half && c < half)
		return recursion(n - 1, r, c);
	if (r < half && c >= half)
		return half * half + recursion(n - 1, r, c - half);
	if (r >= half && c < half)
		return 2 * half * half + recursion(n - 1, r - half, c);

	return 3 * half * half + recursion(n - 1, r - half, c - half);
}

int main()
{
	cin >> n >> r >> c;

	cout << recursion(n, r, c);
}