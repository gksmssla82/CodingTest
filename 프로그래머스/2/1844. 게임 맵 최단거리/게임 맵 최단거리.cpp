#include<bits/stdc++.h>

using namespace std;

int n , m;
int vis[105][105];

int dy[4] = {1,0,-1,0};
int dx[4] = {0,1,0,-1};

// 10111
// 10101
// 10111,
// 11101,
// 00001

int bfs(int y, int x , vector<vector<int> > maps)
{
    queue<pair<int,int>> q;
    
    vis[y][x] = 1;
    q.push({y,x});
    
    while(q.size())
    {
        int qy = q.front().first;
        int qx = q.front().second;
        q.pop();
        
        if (qy == n - 1 && qx == m - 1)
        {
            return vis[qy][qx];
        }
        
        for (int i = 0; i < 4; ++i)
        {
            int ny = qy + dy[i];
            int nx = qx + dx[i];
            
            if (0 > ny || 0 > nx || ny >= n || nx >= m) continue;
			if (vis[ny][nx] || maps[ny][nx] == 0) continue;

			q.push({ ny,nx });
			vis[ny][nx] = vis[qy][qx] + 1;

        }
    }
    
    return -1;
}

int solution(vector<vector<int> > maps)
{
     n = maps.size();
     m = maps[0].size();
    
    return bfs(0,0, maps);
}