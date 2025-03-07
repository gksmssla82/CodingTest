#include <bits/stdc++.h>

using namespace std;

int func(int n, int r, int c)
{
	if (n == 0)
		return 0;

	// 한변 길이의 절반
	int half = 1 << (n - 1);

	// 1번사각형
	if (r < half && c < half)
	return func(n - 1, r, c);
	// 2번사각형
	if (r < half && c >= half)
	return half * half + func(n - 1, r, c - half);
	// 3번사각형
	if (r >= half && c < half)
	return 2 * half * half + func(n - 1, r - half, c);
	// 4번사각형
	return 3 * half * half + func(n - 1, r - half, c - half);
}

int main()
{
	int n, r, c;

	cin >> n >> r >> c;

	cout << func(n, r, c);

}