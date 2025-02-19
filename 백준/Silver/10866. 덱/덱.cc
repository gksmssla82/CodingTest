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
	int n;

	cin >> n;

	string op;

	deque<int> deq;

	int add;

	for (int i = 0; i < n; ++i)
	{
		cin >> op;

		if (op == "push_front")
		{
			cin >> add;
			deq.push_front(add);
		}

		else if (op == "push_back")
		{
			cin >> add;
			deq.push_back(add);
		}

		else if (op == "pop_front")
		{
			if (deq.empty())
				cout << -1 << '\n';
			else
			{
				cout << deq.front() << '\n';
				deq.pop_front();
			}
		}

		else if (op == "pop_back")
		{
			if (deq.empty())
				cout << -1 << '\n';
			else
			{
				cout << deq.back() << '\n';
				deq.pop_back();
			}
		}

		else if (op == "size")
			cout << deq.size() << '\n';

		else if (op == "empty")
			deq.empty() ? cout << 1 << '\n' : cout << 0 << '\n';

		else if (op == "front")
			deq.empty() ? cout << -1 << '\n' : cout << deq.front() << '\n';

		else if (op == "back")
			deq.empty() ? cout << -1 << '\n' : cout << deq.back() << '\n';

	}
}