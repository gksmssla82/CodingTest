#include <string>
#include <vector>

using namespace std;

int cnt = 0;
int vis[205];

void dfs(int here, int n, vector<vector<int>> v)
{
   vis[here] = true;
    
    for (int i = 0; i < n; ++i)
    {
        if (vis[i] || v[here][i] == 0) continue;
        dfs(i, n, v);
    }
}

int solution(int n, vector<vector<int>> computers) {

    
    for (int i = 0; i < n; ++i)
    {
        if (!vis[i])
        {
        ++cnt;
        dfs(i,n,computers);
        }
    }
   
    
    return cnt;
}