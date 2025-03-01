#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int dis[100002];

int main()
{
	// 수빈 n, 동생 k
	int n, k;

	cin >> n >> k;

	// 거리 배열인덱스 전부 -1 초기화
	fill(dis, dis + 100001, -1);

	dis[n] = 0;
	queue<int> q;
	q.emplace(n);

	// 동생 인덱스의값이 -1이 아닐떄까지 반복
	while (dis[k] == -1)
	{
		int cur = q.front(); q.pop();

		for (int next : {cur - 1, cur + 1, 2 * cur})
		{
			if (next < 0 || next > 100000)
				continue;
			if (dis[next] != -1)
				continue;

			dis[next] = dis[cur] + 1;
			q.emplace(next);
		}
	}

	cout << dis[k];
}