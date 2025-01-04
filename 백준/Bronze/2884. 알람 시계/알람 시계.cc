#include <iostream>

using namespace std;


int main()
{
	int iHour = 0, iMin = 0;

	cin >> iHour >> iMin;

	iMin = iMin - 45;

	if (iMin < 0)
	{
		iMin += 60;
		--iHour;

		if (iHour < 0)
		{
			iHour += 24;
		}
	}

	cout << iHour << " " << iMin << endl;
}