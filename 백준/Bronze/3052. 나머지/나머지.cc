#include <iostream>

using namespace std;

int main()
{
	int count[42] = {};

	int input;

	for (int i = 0; i < 10; ++i)
	{
		cin >> input;

		// HashTable기반 
		// 1이면 1번인덱스가 1증가 
		count[input % 42]++;
	}

	int value = 0;

	for (int c : count)
	{
		if (c > 0)
			++value;
	}

	cout << value;

	return 0;
}