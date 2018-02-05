#include<cstdio>
#include<cstring> 
#include<iostream>
#include<vector> 
#include<queue>
using namespace std;

const int INF = 0x3F3F3F3F; 
struct node{
	int x, y;
};

int best;
int n, m;
char map[15][15];
vector<node> spawn;

int fire(int i, int j)
{
	char map[15][15];  
	int tme[15][15];
	int dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0}; 
	queue<node> que; 
	
	memcpy(map, ::map, sizeof(map)); 
	map[spawn[i].x][spawn[i].y] = '.',  map[spawn[j].x][spawn[j].y] = '.';
	memset(tme, 0, sizeof(tme));
	que.push(spawn[i]), que.push(spawn[j]);
	
	while (!que.empty()) 
	{
		node cur = que.front(); que.pop();
		for (int i=0; i<4; ++i)
		{
			int x = cur.x+dir[i][0], y = cur.y+dir[i][1];
			if (map[x][y] == '#') {
				map[x][y] = '.';
				tme[x][y] = tme[cur.x][cur.y] + 1;
				
				node nxt = {x, y}; 
				que.push(nxt);
			}
		}
	}
	
	bool nograss = true; int best = 0;
	for (int i=1; nograss&&i<=n; ++i)
	{
		for (int j=1; nograss&&j<=m; ++j)
		{
			if (map[i][j] == '#') nograss = false;
			best = max(best, tme[i][j]); 
		} 
	} 
	
	return (nograss ? best : INF); 
} 

void search()
{ 
	for (int i=0; i<spawn.size(); ++i)
	{
		for (int j=i; j<spawn.size(); ++j)
		{
			best = min(best, fire(i, j));	
		}
	}
}

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin); 
	#endif
	
	int T; scanf("%d", &T);
	for (int t=1; t<=T; ++t)
	{
		best = INF;
		memset(map, 0, sizeof(map));
		spawn.clear();
		
		scanf("%d%d", &n, &m);
		for (int i=1; i<=n; ++i)
		{
			for (int j=1; j<=m; ++j)
			{
				scanf(" %c", &map[i][j]);
				// "%c"前的空格是提示Scanf跳过换行符等空白字符
				// 等价语句 cin >> map[i][j] 
				
				if (map[i][j] == '#') {
					node n = {i, j}; 
					spawn.push_back(n);
				} 
			}
		}
		
		search();
		
		printf("Case %d: ", t); 
		(best != INF) ? printf("%d\n", best) : printf("-1\n");
	}
}

