#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
	int iCount = 0;
	int iMin = 1000000;
	int iMax = -1000000;
	int iinput = 0;

	cin >> iCount;

	for (int i = 0; i < iCount; ++i)
	{
		cin >> iinput;

		if (iinput < iMin)
		{
			iMin = iinput;
		}

		if (iinput > iMax)
		{
			iMax = iinput;
		}
	}

	cout << iMin << " " << iMax;


	return 0;
}