#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n, a[10] = {}, ans = 0;

	cin >> n;

	// 자릿수 값 인덱스 번호로 ++
	while (n)
	{
		a[n % 10]++;
		n /= 10;
	}

	for (int i = 0; i < 10; ++i)
	{
		if (i == 6 || i == 9)
			continue;
		
		ans = max(ans, a[i]);
	}

	ans = max(ans, (a[6] + a[9] + 1) / 2);

	cout << ans;
	
	return 0;
}
