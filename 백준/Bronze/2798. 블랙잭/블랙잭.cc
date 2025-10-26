#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <stack>

int n, m;
int arr[105];
int mn = 987654321;
int sum;
int ret;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n - 2; ++i)
	{
		for (int j = i + 1; j < n - 1; ++j)
		{
			for (int k = j + 1; k < n; ++k)
			{
				sum = arr[i] + arr[j] + arr[k];
				int temp = m - sum;

				if (mn > temp && temp >= 0)
				{
					mn = temp;
					ret = sum;
				}
			}
		}
	}

	cout << ret;

	return 0;
}
