#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	
	cin >> n;

	//  n == 5 빈칸 0,1,2,3,4 / 별 9,7,5,3,1

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
			cout << ' ';

		for (int p = 0; p < (n * 2 - 1) - 2 * i; ++p)
			cout << '*';
		
		cout << '\n';
	}

	return 0;
}



