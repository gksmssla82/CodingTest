#include <iostream>

using namespace std;


// 공백 4,3,2,1 , 별 1 2 3 4 5
int main()
{
	int count = 0;
	
	cin >> count;

	for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count - 1 - i; ++j)
		{
			cout << " ";
		}
		
		for (int p = 0; p < i + 1; ++p)
		{
			cout << "*";
		}

		cout << endl;
	
	}


	return 0;
}