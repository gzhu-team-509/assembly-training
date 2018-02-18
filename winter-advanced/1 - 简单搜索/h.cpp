#include <cstdio>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
#define st pair<int, int>

const int mxN = 110;
const int INF = 0x3F3F3F3F;

int a, b, c;
bool vis[mxN][mxN];
vector<int> op[mxN][mxN];
queue<st> que;

const char * msg[6] = {
	"FILL(1)", "FILL(2)",
	"DROP(1)" , "DROP(2)", 
	"POUR(1,2)", "POUR(2,1)",
};

bool legal(int x, int y)
{
	return x >= 0 && x <= a && y >= 0 && y <= b; 
}

void checkin(int x, int y, int fx, int fy, int i)
{
	if (legal(x, y) && !vis[x][y]) {
		vis[x][y] = true;
		op[x][y] = op[fx][fy], op[x][y].push_back(i);
		que.push(make_pair(x, y));
	}
}

void speak(int x, int y)
{
	printf("%zd\n", op[x][y].size());
	for (unsigned i = 0; i < op[x][y].size(); ++i)
		puts(msg[op[x][y][i]]);
}

void search()
{
	while (!que.empty()) 
	{
		st cur = que.front(); que.pop();
		int cx = cur.first, cy = cur.second;
		if (cx == c || cy == c) {
			speak(cx, cy);
			return;
		}
		
		for (int i = 0, nx, ny, diff; i < 6; ++i)
		{
			switch(i) 
			{
				case 0: nx = a, ny = cy; break;
				case 1: nx = cx, ny = b; break;
				case 2: nx = 0, ny = cy; break;
				case 3: nx = cx, ny = 0; break;
				case 4: 
					diff = b - cy; diff = min(diff, cx);
					nx = cx - diff, ny = cy + diff;
					break;
				case 5:
					diff = a - cx; diff = min(diff, cy);
					nx = cx + diff, ny = cy - diff;
					break;
			}
			checkin(nx, ny, cx, cy, i);
		}
	}
	puts("impossible");
} 

int main()
{
	while (scanf("%d%d%d", &a, &b, &c) == 3)
	{
		memset(vis, 0, sizeof(vis));
		while (que.size()) que.pop();
		
		vis[0][0] = true; que.push(make_pair(0, 0));
		search();
	}
}

