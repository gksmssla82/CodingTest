#include <iostream>

using namespace std;

int main()
{
	static int iArr1[101][101];
	static int iArr2[101][101];
	int iX = 0, iY = 0;

	cin >> iX;
	cin >> iY;

	for (int i = 0; i < iX; ++i)
	{
		for (int j = 0; j < iY; ++j)
		{
			cin >> iArr1[i][j];
		}
	}

	for (int i = 0; i < iX; ++i)
	{
		for (int j = 0; j < iY; ++j)
		{
			cin >> iArr2[i][j];
		}
	}

	for (int i = 0; i < iX; ++i)
	{
		for (int j = 0; j < iY; ++j)
		{
			cout << iArr1[i][j] + iArr2[i][j] << " ";
		}
	}

	
}

