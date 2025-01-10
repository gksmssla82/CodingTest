#include <iostream>

using namespace std;



int main()
{
	int iCount = 0;
	int iArr[100] = {};
	int iSelect = 0;
	int iOut = 0;

	cin >> iCount;
	
	for (int i = 0; i < iCount; i++)
	{
		cin >> iArr[i];
	}

	cin >> iSelect;

	for (int i = 0; i < iCount; i++)
	{
		if (iArr[i] == iSelect)
		{
			++iOut;
		}
	}

	cout << iOut << endl;

	return 0;
}