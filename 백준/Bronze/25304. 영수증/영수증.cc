#include <iostream>

using namespace std;


int main()
{
	int totalprice = 0;
	int totalcount = 0;
	int price = 0;
	int count = 0;
	int out = 0;
	

	cin >> totalprice >> totalcount;

	for (int i = 1; i <= totalcount; ++i)
	{
		cin >> price >> count;
		out += price * count;
	}

	if (out == totalprice)
	{
		cout << "Yes" << endl;
	}

	else
	{
		cout << "No" << endl;
	}

	return 0;
	
}