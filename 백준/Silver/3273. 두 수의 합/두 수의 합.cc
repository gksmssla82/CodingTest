#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[1000001];
bool ischeck[2000001];

int main()
{
	int n, x;

	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	cin >> x;

	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		if (x - arr[i] > 0 && ischeck[x - arr[i]])
		{
			++count;
		}

		ischeck[arr[i]] = true;
	}

	cout << count;

	return 0;
}