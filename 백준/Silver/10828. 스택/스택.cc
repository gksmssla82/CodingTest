#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;

	int n;
	cin >> n;

	string op;

	for (int i = 0; i < n; ++i)
	{
		cin >> op;

		if (op == "push")
		{
			int input;
			cin >> input;

			s.emplace(input);
		}

		else if (op == "pop")
		{
			s.empty() ? cout << -1 << '\n' : cout << s.top() << '\n';

			if (!s.empty())
				s.pop();
		}

		else if (op == "size")
		{
			cout << s.size() << '\n';
		}

		else if (op == "empty")
		{
			s.empty() ? cout << 1 << '\n' : cout << 0 << '\n';
		}

		else if (op == "top")
		{
			s.empty() ? cout << -1 << '\n' : cout << s.top() << '\n';
		}
	}
	return 0;
}

