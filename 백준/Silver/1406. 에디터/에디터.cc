#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main(void) {

	string n;

	cin >> n;

	list<char> listn;

	for (auto i : n)
		listn.emplace_back(i);

	auto cursor = listn.end();

	int m;

	cin >> m;

	while (m--)
	{
		char op;
		cin >> op;

		if (op == 'P')
		{
			char add;
			cin >> add;
			listn.insert(cursor, add);
		}

		else if (op == 'L')
		{
			if (cursor != listn.begin())
				cursor--;
		}

		else if (op == 'D')
		{
			if (cursor != listn.end())
				cursor++;
		}

		// B
		else
		{
			if (cursor != listn.begin())
			{
				cursor--;
				cursor = listn.erase(cursor);
			}
		}
	}

	for (auto c : listn)
		cout << c;

	return 0;
}