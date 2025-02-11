#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	//  n == 5 빈칸 4,3,2,1 / 별 1,3,5,7,9

	for (int i = 0; i < n; ++i)
	{
		
		for (int j = 0; j < n - 1 - i; ++j)
			cout << ' ';
		
		for (int p = 0; p < 1 + i * 2; ++p)
			cout << '*';

		cout << '\n';
			
	}

	return 0;
}



