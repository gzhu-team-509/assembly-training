#include <bits/stdc++.h>
using namespace std;

int m, n;
int tot;
char pic[110][110];

bool legal(int x, int y)
{
	return (x >= 1 && x <= m) && (y >= 1 && y <= n);
}

void mark(int x, int y)
{
	pic[x][y] = '#';
	for (int i = -1; i <= 1; ++i)
	{
		for (int j = -1; j <= 1; ++j)
		{
			int nx = x+i, ny = y+j;
			if (legal(nx, ny) && pic[nx][ny] == '@') mark(nx, ny); 
		}
	}
}

int main()
{
	while (scanf("%d%d", &m, &n) == 2 && n && m)
	{
		tot = 0;
		for (int i = 1; i <= m; ++i)
		{
			scanf("%s", pic[i]+1);
		}
		
		for (int i = 1; i <= m; ++i)
			for (int j = 1; j <= n; ++j) if (pic[i][j] == '@')
				++tot, mark(i, j);
				
		printf("%d\n", tot);
	}
}

