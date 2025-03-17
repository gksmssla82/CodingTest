#include <bits/stdc++.h>

using namespace std;

#define MAX 30

int n, s;
int arr[MAX];
int cnt = 0;

void func(int cur, int tot)
{
	if (cur == n)
	{
		if (tot == s)
			++cnt;

		return;
	}
	func(cur + 1, tot);
	func(cur + 1, tot + arr[cur]);
}

int main()
{
	cin >> n >> s;

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	func(0, 0);

	if (s == 0)
		--cnt;

	cout << cnt;

	return 0;
}