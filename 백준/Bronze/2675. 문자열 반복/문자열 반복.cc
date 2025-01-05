#include <iostream>
using namespace std;

int main()
{
	int testcase;
	int count;
	string word;

	cin >> testcase;

	for (int i = 0; i < testcase; ++i)
	{
		cin >> count;
		cin >> word;

		for (int j = 0; j < word.length(); ++j)
		{

			for (int k = 0; k < count; ++k)
			{
				cout << word[j];
			}
		}
		cout << '\n';
	}

	return 0;
}