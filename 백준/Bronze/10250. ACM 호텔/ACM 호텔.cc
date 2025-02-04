#include <iostream>

using namespace std;

int main()
{
	int t;
	int h, w, n;

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> h >> w >> n;

		int floor = n % h;
		int room = (n / h) + 1;

		if (floor == 0) {
			floor = h;
			room = n / h;
		}

	    int number = floor * 100 + room;

		cout << number << '\n';
		
	}

	return 0;
}