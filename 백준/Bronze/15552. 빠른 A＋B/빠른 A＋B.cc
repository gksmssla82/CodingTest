#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int count = 0;
	int a = 0, b = 0;

	cin >> count;

	for (int i = 0; i < count; ++i)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}