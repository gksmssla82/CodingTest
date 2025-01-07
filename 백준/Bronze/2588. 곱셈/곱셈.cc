#include <iostream>

using namespace std;


int main()
{
	int iValue;
	char chValue[4];

	cin >> iValue >> chValue;

	
	cout << iValue * (chValue[2] - '0') << endl;
	cout << iValue * (chValue[1] - '0') << endl;
	cout << iValue * (chValue[0] - '0') << endl;
	cout << iValue * atoi(chValue) << endl;


	return 0;

}