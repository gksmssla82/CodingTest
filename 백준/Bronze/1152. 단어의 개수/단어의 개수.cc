#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	int index = 0;
	int value = 1;

	getline(cin, word);

	// 0번 인덱스인 경우
	if (word.length() == 1 && word[index] == ' ')
	{
		cout << 0 << '\n';
		return 0;
	}

	for (int i = 1; i < word.length() -1; ++i)
	{
		if (word[i] == ' ')
			++value;
	}

	cout << value << endl;

	return 0;
}