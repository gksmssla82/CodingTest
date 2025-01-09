#include <iostream>

using namespace std;


int main()
{
	int iX = 0, iY = 0;

	cin >> iX >> iY;

	if (iX >= 0 && iY >= 0)
	{
		cout << "1" << endl;
	}

	else if (iX <= 0 && iY >= 0)
	{
		cout << "2" << endl;
	}

	else if (iX <= 0 && iY <= 0)
	{
		cout << "3" << endl;
	}

	else
		cout << "4" << endl;

		
	return 0;
}