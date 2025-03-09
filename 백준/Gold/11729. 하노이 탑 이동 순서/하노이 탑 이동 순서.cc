#include <bits/stdc++.h>

using namespace std;

void hanoi(int num, int from, int to)
{
	if (num == 1)
	{
		cout << from << ' ' << to << '\n';
		return;
	}

	int temp = 6 - from - to;

	hanoi(num - 1, from, temp);

	cout << from << ' ' << to << '\n';

	hanoi(num - 1, temp, to);
}

int main()
{
	int k;
	cin >> k;

	int movecount = (1 << k) - 1;
	
	cout << movecount << '\n';

	hanoi(k, 1, 3);
}