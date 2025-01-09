#include <iostream>

using namespace std;


int main()
{
	int count = 0;

	cin >> count;

	for (int i = 1; i <= count; ++i)
	{
		if (i % 4 == 0)
		{
			cout << "long ";
		}
	}

	cout << "int";
	
}