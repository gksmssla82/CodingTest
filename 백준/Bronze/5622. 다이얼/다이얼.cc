#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>
#include <map>
#include <string>

int a[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
int sum;

string s;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	cin >> s;

	for (int i = 0; i < s.size(); ++i)
	{
		sum += a[s[i] - 'A'];
	}

	cout << sum;

	return 0;
}
