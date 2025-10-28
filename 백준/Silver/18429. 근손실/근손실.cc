#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n, k;
vector<int> v1;
vector<int> v2;
bool vis[15];
int sum = 0;
int cnt = 0;

void dfs()
{
	if (v2.size() == n)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		if (!vis[i])
		{
			vis[i] = true;
			v2.push_back(v1[i]);

			sum += v1[i];
			sum -= k;

			if (sum >= 0)
			{
				dfs();
			}

			vis[i] = false;
			v2.pop_back();

			sum -= v1[i];
			sum += k;
		}

	}
	
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;

	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		v1.push_back(a);
	}

	dfs();
	
	cout << cnt;

	return 0;
}