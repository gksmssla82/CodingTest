#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int n, cnt = 1;

	cin >> n;

	stack<int> s;
	vector<char> v;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;

		while (cnt <= x)
		{
			v.emplace_back('+');
			s.emplace(cnt);
			++cnt;
		}

		if (x == s.top())
		{
			s.pop();
			v.emplace_back('-');
		}

		else
		{
			cout << "NO";
			return 0;
		}
	}

	for (auto& o : v)
		cout << o << '\n';

	return 0;
}