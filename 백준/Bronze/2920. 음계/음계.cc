#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main()
{
	string a,b,c;

	getline(cin, a);

	b = "1 2 3 4 5 6 7 8";
	c = "8 7 6 5 4 3 2 1";

	if (a == b)
		cout << "ascending";
	else if (a == c)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}
