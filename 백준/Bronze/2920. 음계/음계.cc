#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main()
{
	int a[8];
	int asc = 0, des = 0;

	for (int i = 0; i < 8; ++i)
		cin >> a[i];

	for (int i = 0; i < 7; ++i)
	{
		if (a[i] < a[i + 1])
			++asc;
		else if (a[i] > a[i + 1])
			++des;
	}

	if (asc == 7)
		cout << "ascending";
	else if (des == 7)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}