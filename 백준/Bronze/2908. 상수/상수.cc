#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>
#include <string>

string s1, s2;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	cin >> s1 >> s2;

	reverse(&s1[0], &s1[s1.size()]);
	reverse(&s2[0], &s2[s2.size()]);

	if (s1 < s2)
	{
		cout << s2;
	}
	else
	{
		cout << s1;
	}

	return 0;
}
