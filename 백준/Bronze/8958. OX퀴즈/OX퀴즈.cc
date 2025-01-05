#include <iostream>
using namespace std;

int main()
{
	int testcase;
	int score;
	int Ocnt;
	string word;

	cin >> testcase;

	for (int i = 0; i < testcase; ++i)
	{
		cin >> word;
		
		score = 0;
		Ocnt = 0;

		for (int j = 0; j < word.length(); ++j)
		{
			if (word[j] == 'O')
				++Ocnt;
			else
				Ocnt = 0;

			score += Ocnt;
		}

		cout << score << "\n";
	}
	

	return 0;
}
