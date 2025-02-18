#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int k;

	cin >> k;

	stack<int> s;

	for (int i = 0; i < k; ++i)
	{
		int input;

		cin >> input;

		if (input == 0 && !s.empty())
			s.pop();

		else
			s.emplace(input);	
	}

	int s_size = s.size();
	int sum = 0;

	for (int i = 0; i < s_size; ++i)
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;

	return 0;
}