#include <iostream>

using namespace std;


int main()
{
	int n = 0;
    int value = 0;

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		value += i;
	}

	cout << value << endl;

	return 0;
}