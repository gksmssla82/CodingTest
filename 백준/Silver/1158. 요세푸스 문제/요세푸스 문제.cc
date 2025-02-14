#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
using namespace std;

// Queue 1,2,3,4,5,6,7, k - 1 push and pop
// 3,4,5,6,7,1,2,  = 4,5,6,7,1,2
// 6,7,1,2,4,5     = 7,1,2,4,5
// 2,4,5,7,1       = 4,5,7,1
// 7,1,4,5         = 1,4,5
// 5,4,1           = 4,1
// 1,4             = 4
// 4

int main(void)
{
	int n, k;

	cin >> n >> k;

	queue<int> q;

	// 1 ~ n까지 삽입
	for (int i = 1; i <= n; ++i)
		q.emplace(i);

	cout << '<';

	// 큐가 차있다면 실행
	while (!q.empty())
	{
		for (int i = 0; i < k - 1; ++i)
		{
			// 뒤로보내고 앞에 삭제 
			q.emplace(q.front());
			q.pop();
		}

		// 앞에 출력후 삭제
		cout << q.front();
		q.pop();

		if (q.size())
			cout << ", ";
	}

	cout << '>';


	return 0;
}