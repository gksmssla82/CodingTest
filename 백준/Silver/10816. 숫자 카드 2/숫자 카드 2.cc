#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    unordered_map<int, int> mp;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int A;
        cin >> A;

        mp[A]++;
    }

    cin >> m;

    for (int i = 0; i < m; ++i)
    {
        int A;
        cin >> A;

        if (mp[A])
            cout << mp[A] << ' ';
        else
            cout << "0 ";
    }

    return 0;
}