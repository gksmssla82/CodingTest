#include <iostream>

using namespace std;

int main()
{
	int a = 1, b = 1;


	while (true)
	{
		cin >> a;
		cin >> b;
		if (a + b != 0)
		{
			cout << a + b << "\n";
		}
		else
			break;
	}

	return 0;
}
