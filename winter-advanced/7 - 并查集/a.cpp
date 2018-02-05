#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;

struct station
{
	int id, x, y;
	int father;
} node[1010];


int dis(int a, int b)
{
	int dx = node[a].x - node[b].x;
	int dy = node[a].y - node[b].y;
	return dx * dx + dy * dy;
}

int find(int a)
{
	return node[a].father == a ? node[a].father : node[a].father = find(node[a].father);
}

void merge(int a, int b)
{
	int fa = find(a), fb = find(b);
	node[fa].father = fb;
}

int main()
{
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif
	
	int n, d;
	while (scanf("%d%d", &n, &d) == 2)
	{
		d *= d;
		
		memset(node, 0, sizeof(node));
		for (int i = 1; i <= n; ++i)
		{
			node[i].id = i;
			scanf("%d%d", &node[i].x, &node[i].y);
			node[i].father = 0;
		}
		
		char cmd[10];
		while (scanf("%s", cmd) == 1)
		{
			if (cmd[0] == 'O') {
				int x; scanf("%d", &x);
				node[x].father = x;
				for (int i = 1; i <= n; ++i)
				{
					if (dis(x, i) <= d) if (find(i) != 0) {
						merge(x, i);
					}
				}
			}
			if (cmd[0] == 'S') {
				int a, b; scanf("%d%d", &a, &b);
				int fa = find(a), fb = find(b);
				if (fa!=0 && fb!=0 && fa == fb) {
					printf("SUCCESS\n");
				}
				else {
					printf("FAIL\n");
				}
			}
		}
	}
} 

