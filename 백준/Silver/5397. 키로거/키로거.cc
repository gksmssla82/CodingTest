#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;


// BPACD BAPC
int main(void)
{
	int t;
	
	cin >> t;

	list<char> pw;
	string s;

	for (int i = 0; i < t; ++i)
	{
		
		cin >> s;

		pw.clear();

		auto iter = pw.begin();

		for (auto ldx : s)
		{
			// 첫번쨰 주소가 아니면 
			if (ldx == '<')
			{
				if (iter != pw.begin())
					--iter;
			}
			// 마지막 주소가 아니면
			else if (ldx == '>')
			{
				if (iter != pw.end())
					++iter;
			}

			else if (ldx == '-')
			{
				if (iter != pw.begin())
				iter = pw.erase(--iter);
			}

			else
			{
				iter = pw.insert(iter, ldx);
				iter++;
			}
		}

		for (auto o : pw)
			cout << o;
		cout << '\n';
	}


	return 0;


}