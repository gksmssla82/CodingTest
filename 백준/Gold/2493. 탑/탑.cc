#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	// 인덱스 , 높이
	stack<pair<int, int>> tower;

	int height;

	// i = 인덱스
	for (int i = 1; i <= n; ++i)
	{
		cin >> height;

		// 타워가 빌떄까지
		while (!tower.empty())
		{
			// 입력한 높이보다 스택에 높이가 크다면
			if (height < tower.top().second)
			{
				// 타워의 인덱스 출력후 while문 탈출
				cout << tower.top().first << ' ';
				break;
			}
			// 타워 계속 뻄
			tower.pop();
		}

		// 타워 다 뻇는데도 높이가 높은게 없을경우 0 출력
		if (tower.empty())
			cout << 0 << ' ';

		// 스택 인덱스,높이 추가
		tower.emplace(make_pair(i, height));
	}
	return 0;
}