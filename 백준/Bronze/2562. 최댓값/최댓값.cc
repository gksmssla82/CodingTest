#include <iostream>
using namespace std;

int main()
{
	int input[9];
	int max = 0;
	int count = 0;

	
	
	for (int i = 0; i < 9; ++i)
	{
		cin >> input[i];
	}

	for (int i = 0; i < sizeof(input) / 4; ++i)
	{
		if (input[i] > max)
		{
			max = input[i];
			count = i;
		}
	}

	cout << max << "\n";
	cout << count + 1 << "\n";
	
	

	return 0;
}