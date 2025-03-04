#include <bits/stdc++.h>

using namespace std;

#define MAX 27

string board[MAX];
bool check[MAX][MAX];
queue<pair<int, int>> q;
vector<int> out;
int nx[4] = { 1,0,-1,0 };
int my[4] = { 0,1,0,-1 };
int num = 0;
int n;

int main()
{
	cin >> n;

	for (int i = 0; i < n; ++i)
			cin >> board[i];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (check[i][j] || board[i][j] != '1')
				continue;

			check[i][j] = true;
			q.emplace(i, j);
			++num;
			int area = 0;

			while (!q.empty())
			{
				auto cur = q.front(); q.pop();
				++area;

				for (int i = 0; i < 4; ++i)
				{
					int x = cur.first + nx[i];
					int y = cur.second + my[i];

					if (x < 0 || x >= n || y < 0 || y >= n)
						continue;
					if (check[x][y] || board[x][y] != '1')
						continue;

					check[x][y] = true;
					q.emplace(x, y);
				}
			}

			out.emplace_back(area);
		}
	}

	cout << num << '\n';

	sort(out.begin(), out.end());

	for (auto& o : out)
		cout << o << '\n';
	

	return 0;
}