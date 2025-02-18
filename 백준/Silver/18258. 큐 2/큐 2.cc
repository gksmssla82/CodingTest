#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	string op;

	queue<int> q;


	for (int i = 0; i < n; ++i)
	{
		cin >> op;

		if (op == "push")
		{
			int add;
			cin >> add;

			q.emplace(add);
		}

		else if (op == "pop")
		{
			if (q.empty())
				cout << -1 << '\n';
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}

		else if (op == "size")
			cout << q.size() << '\n';

		else if (op == "empty")
			q.empty() ? cout << 1 << '\n' : cout << 0 << '\n';

		else if (op == "front")
			q.empty() ? cout << -1 << '\n' : cout << q.front() << '\n';

		else if (op == "back")
			q.empty() ? cout << -1 << '\n' : cout << q.back() << '\n';
	}

	return 0;
}
