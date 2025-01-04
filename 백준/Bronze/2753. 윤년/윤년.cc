#include <iostream>

using namespace std;


int main()
{
	int year;
	bool isyoonyear = false;

	cin >> year;

	if (year % 4 == 0 && year % 100 != 0)
	{
		isyoonyear = true;
	}

	if (year % 400 == 0)
	{
		isyoonyear = true;
	}

	cout << isyoonyear << endl;

	return 0;
}