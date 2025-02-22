#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main()
{
	string word;

	while (true)
	{
		getline(cin, word);
		stack<char> s;
		bool isYes = true;

		if (word == ".")
			break;

		for (auto& a : word)
		{
			

			if (a == '(' || a == '[')
				s.emplace(a);

			else if (a == ')')
			{
				if (s.empty() || s.top() != '(')
				{
					isYes = false;
					break;
				}
				s.pop();
			}

			else if (a == ']')
			{
				if (s.empty() || s.top() != '[')
				{
					isYes = false;
					break;
				}
				s.pop();
			}
		}

		if (!s.empty())
			isYes = false;

		if (isYes)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';


	}

}