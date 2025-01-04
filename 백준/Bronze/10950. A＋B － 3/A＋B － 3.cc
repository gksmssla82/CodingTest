#include <iostream>

using namespace std;


int main()
{
	int count = 0;
	int input1 = 0 , input2 = 0;

	cin >> count;

	for (int i = 1; i <= count; ++i)
	{
		cin >> input1 >> input2;
		cout << input1 + input2 << endl;
	}


	return 0;
}