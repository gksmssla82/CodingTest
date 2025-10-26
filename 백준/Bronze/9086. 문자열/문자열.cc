#include <iostream>

using namespace std;

int main()
{
	int count;
	string str;

	cin >> count;

	for (int i = 0; i < count; ++i)
	{
		cin >> str;

		int size = str.length();

		cout << str[0] << str[size - 1] << "\n";
	}


	return 0;
}