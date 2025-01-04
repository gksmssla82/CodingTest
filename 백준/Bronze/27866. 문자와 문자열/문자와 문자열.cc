#include <iostream>

using namespace std;

int main()
{
	char word[1001];
	int count;

	cin >> word;
	cin >> count;
	count -= 1;

	for (int i = 0; i < sizeof(word); ++i)
	{
		if (i == count)
		{
			cout << word[i];
			break;
		}
	}


	return 0;
}
