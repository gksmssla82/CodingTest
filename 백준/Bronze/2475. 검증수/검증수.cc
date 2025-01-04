#include <iostream>

using namespace std;

int main()
{
	int code[5];
	int value = 0;

	for (int i = 0; i < 5; ++i)
	{
		cin >> code[i];
		int square = code[i] * code[i];
		value += square;
	}

	cout << value % 10 << endl;
	
	return 0;
}