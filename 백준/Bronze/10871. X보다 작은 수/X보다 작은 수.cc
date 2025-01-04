#include <iostream>

using namespace std;



int main()
{
	int iCount = 0;
	int iMin = 0;
	int iArr[100000] = {};

	cin >> iCount >> iMin;

	for (int i = 0; i < iCount; i++)
	{
		cin >> iArr[i];
	}

	for (int i = 0; i < iCount; i++)
	{
		if (iMin > iArr[i])
		{
			cout << iArr[i] << " ";
		}
	}
	
	return 0;
}