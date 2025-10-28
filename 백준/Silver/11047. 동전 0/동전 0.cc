#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


int n, k;
vector<int> v;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;

	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	sort(v.rbegin(), v.rend());

	int cnt = 0;

	for (const int& i : v)
	{
		int cal = k / i;

		if (cal <= 0) continue;

		cnt += cal;

		k = k % i;
	}

	cout << cnt;

	return 0;
}