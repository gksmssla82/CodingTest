#include <iostream>

using namespace std;

int main()
{
	int count;
	string num;
	int value = 0;

	cin >> count;
	cin >> num;

	for (int i = 0; i < count; ++i)
	{
		value += num[i] - '0';
	}

	cout << value << "\n";
	

	return 0;
}