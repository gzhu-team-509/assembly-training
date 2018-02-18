#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3F3F3F3F;
const int dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};

struct node
{
	int x, y, step;
};

int n, m;
char pic[220][220];
int kfc[220][220];
bool vis[2][220][220];
queue<node> que[2];

bool in(int x, int y)
{
	return x>=0 && x<n && y>=0 && y<m;
}

void search()
{
	int tot = INF;
	for (int step = 0; !(que[0].empty()&&que[1].empty()); ++step)
	{
		for (int i = 0; i < 2; ++i) while (!que[i].empty())
		{
			node cur = que[i].front();
			if (cur.step != step) break;
			else que[i].pop();
			
			if (pic[cur.x][cur.y] == '@')
			{
				if (kfc[cur.x][cur.y])
					tot = min(tot, kfc[cur.x][cur.y]+step);
				else kfc[cur.x][cur.y] = step;
			} 
			for (int j = 0; j < 4; ++j)
			{
				int nx = cur.x+dir[j][0], ny = cur.y+dir[j][1];
				if (in(nx, ny) && pic[nx][ny] != '#' && !vis[i][nx][ny])
				{
					vis[i][nx][ny] = true;
					que[i].push({nx, ny, step+1});
				}
			}
		}
	}
	printf("%d\n", tot*11);
}

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif
	
	while (scanf("%d%d", &n, &m) == 2)
	{
		memset(kfc, 0, sizeof(kfc));
		memset(vis, 0, sizeof(vis));
		while (!que[0].empty()) que[0].pop();
		while (!que[1].empty()) que[1].pop();
		
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				scanf(" %c", &pic[i][j]);
				if (pic[i][j] == 'Y') {
					que[0].push({i, j, 0}); vis[0][i][j] = true;
				}
				if (pic[i][j] == 'M') {
					que[1].push({i, j, 0}); vis[1][i][j] = true;
				}
			}
		}
		
		search();
	}
}

