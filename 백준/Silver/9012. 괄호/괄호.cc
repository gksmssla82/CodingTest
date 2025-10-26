#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <stack>

int t;
string s;

bool check(const string& s)
{
	stack<char> stk;

	for (const char& i : s)
	{
		if (i == '(')
		{
			stk.push(i);
		}

		else if (i == ')')
		{
			if (stk.size())
			{
				stk.pop();
			}
			else
			{
				return false;
			}
		}
	}

	return stk.empty();
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> t;

	while (t--)
	{
		cin >> s;

		if (check(s))
		{
			cout << "YES" << '\n';
		}
		else
		{
			cout << "NO" << '\n';
		}
	}

	

	return 0;
}
