#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main()
{
	// 1. pop_front, 2. emplace_back(dq_front()), pop_front, 3.emplace_front(dq_back()), pop_back()

	deque<int> dq;

	int n, m;

	cin >> n >> m;

	// 1 ~ n dq insert
	for (int i = 1; i <= n; ++i)
		dq.emplace_back(i);

	int ans = 0;

	while (m--)
	{
		int t;
		cin >> t;

		// t의 idx 번호
		int idx = find(dq.begin(), dq.end(), t) - dq.begin();

		while (dq.front() != t)
		{
			if (idx < dq.size() - idx)
			{
				dq.emplace_back(dq.front());
				dq.pop_front();
			}
			else
			{
				dq.emplace_front(dq.back());
				dq.pop_back();
			}

			++ans;
		}

		dq.pop_front();
	}

	cout << ans;

}