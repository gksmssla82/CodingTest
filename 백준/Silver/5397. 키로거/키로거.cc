#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int t;

	cin >> t;

	string L;

	list<char> pw;
	auto cursor = pw.begin();

	for (int i = 0; i < t; ++i)
	{
		cin >> L;

		pw.clear();
		cursor = pw.begin();

		for (auto& i : L)
		{
			if (i == '<')
			{
				if (cursor != pw.begin())
					--cursor;
			}

			else if (i == '>')
			{
				if (cursor != pw.end())
					++cursor;
			}

			else if (i == '-')
			{
				if (cursor != pw.begin())
					cursor = pw.erase(--cursor);
			}

			else
			{
				cursor = pw.insert(cursor, i);
				++cursor;
			}
		}

		for (auto& o : pw)
			cout << o;
		cout << '\n';
	}

	return 0;
}