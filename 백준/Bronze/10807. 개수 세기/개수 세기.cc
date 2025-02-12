#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n, find, count = 0;

	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cin >> find;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == find)
			++count;
	}

	cout << count;

	return 0;
}