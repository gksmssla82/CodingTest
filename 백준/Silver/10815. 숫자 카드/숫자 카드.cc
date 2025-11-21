#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<int, int> map;

    int n, m;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int A;
        cin >> A;

        map[A]++;
    }

    cin >> m;

    for (int i = 0; i < m; ++i)
    {
        int A;
        cin >> A;

        if (map[A])
            cout << "1 ";
        else
            cout << "0 ";

    }

    return 0;
}